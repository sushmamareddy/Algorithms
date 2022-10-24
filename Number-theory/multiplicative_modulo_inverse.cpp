#include<bits/stdc++.h>
using namespace std;
class Triplet
{
	public:
		int x;
		int y;
		int gcd;	
};
Triplet extendedeuclid(int a,int b)
{
	if(b==0)
	{
		Triplet ans;
		ans.gcd=a;
		ans.x=1;
		ans.y=0;
		return ans;
	}
	Triplet smallans=extendedeuclid(b,a%b);
	Triplet ans;
	ans.gcd=smallans.gcd;
	ans.x=smallans.y;
	ans.y=smallans.x-(a/b)*smallans.y;
	return ans;
}
int modulo(int a,int m)
{
	Triplet ans=extendedeuclid(a,m);
	return ans.x;
}
int main()
{
	int a,m;
	cin>>a>>m;
	int ans=modulo(a,m);
	cout<<ans<<endl;
}
