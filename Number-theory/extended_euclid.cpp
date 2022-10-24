#include<bits/stdc++.h>
using namespace std;
class Triplet
{	public:
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
int main()
{
	int a,b;
	cin>>a>>b;
	Triplet ans=extendedeuclid(a,b);
	cout<<ans.gcd<<"\n";
	cout<<ans.x<<"\n";
	cout<<ans.y<<"\n";
}
