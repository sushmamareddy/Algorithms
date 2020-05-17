#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int max=-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	int b[max+1];
	for(int i=0;i<=max;i++)
	{
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		b[arr[i]]++;
	}
	for(int i=1;i<=max;i++)
	{
		b[i]=b[i]+b[i-1];
	}
	int ans[n];
	for(int i=0;i<n;i++)
	{
		int t = b[arr[i]];
		ans[t-1]=arr[i];
		b[arr[i]]--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
}
