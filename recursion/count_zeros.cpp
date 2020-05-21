#include<bits/stdc++.h>
using namespace std;
int countzeros(int n)
{
	if(n==0)
	{
		return 0;
	}
	int ans=countzeros(n/10);
	if(n%10==0)
	{
		return ans+1;
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int ans=countzeros(n);
	cout<<ans<<"\n";
}
