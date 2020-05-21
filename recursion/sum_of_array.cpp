#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{
	int total=0;
	if(n==0)
	{
		return 0;
	}
	total=total+sum(a+1,n-1);
	return total+a[0];
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
	int s=sum(a,n);
	cout<<s<<"\n";
}
