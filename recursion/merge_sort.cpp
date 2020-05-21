#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int start,int mid,int end)
{
	int temp[end-start+1];
	int i=start;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=end)
	{
		if(a[i]<=a[j])
		{
			temp[k++]=a[i++];
		}
		else
		{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=end)
	{
		temp[k++]=a[j++];
	}
	k=0;
	for(i=start;i<=end;i++)
	{
		a[i]=temp[k++];
	}
}
void mergesort(int a[],int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int mid=(start+end)/2;
	mergesort(a,start,mid);
	mergesort(a,mid+1,end);
	merge(a,start,mid,end);
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
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
