#include<bits/stdc++.h>
using namespace std;
int allindices(int a[],int n,int key,int output[])
{
	if(n==0)
	{
		return 0;
	}
	int ans=allindices(a,n-1,key,output);
	if(a[n-1]==key)
	{
		output[ans]=n-1;
		return ans+1;
	}
	else
	{
		return ans;
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
	int key;
	cin>>key;
	int output[n];
	int ans=allindices(a,n,key,output);
	for(int i=0;i<ans;i++)
	{
		cout<<output[i]<<"\n";
	}
}
