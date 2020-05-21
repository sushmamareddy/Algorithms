#include<bits/stdc++.h>
using namespace std;
int countzeros(int a[],int n)
{
	int count=0;
	if(n==0)
	{
		return 0;
	}
	count=count+countzeros(a+1,n-1);
	if(a[0]==0)
	{
		return count+1;
	}
	else
	{
		return count;
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=countzeros(a,n);
	cout<<ans<<"\n";
}
