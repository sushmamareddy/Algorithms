#include<bits/stdc++.h>
using namespace std;
int d(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	return (n-1)*(d(n-1)+d(n-2));
}
int main()
{
	int n;
	cin>>n;
	int ans=d(n);
	cout<<ans<<"\n";
}
