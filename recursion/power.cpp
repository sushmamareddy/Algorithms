#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	return x*power(x,n-1);
}
int main()
{
	int x;
	cin>>x;
	int n;
	cin>>n;
	int ans=power(x,n);
	cout<<ans<<endl;
}
