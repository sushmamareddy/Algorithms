#include<bits/stdc++.h>
using namespace std;
int Maximum(int a[],int n)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]>=a[mid+1] && a[mid]>=a[mid-1])
		{
			return mid;
		}
		else if(mid>0 && a[mid-1]>a[mid])
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
}
int BinaryD(int a[],int low,int high,int key)
{
	if(high<low)
	{
		return -1;
	}
	int mid=(low+high)/2;
	if(a[mid]==key)
	{
		return mid;
	}
	else if(a[mid]<key)
	{
		return BinaryD(a,low,mid-1,key);
	}
	return BinaryD(a,mid+1,high,key);
}
int BinaryA(int a[],int low,int high,int key)
{
	if(high<low)
	{
		return -1;
	}
	int mid=(low+high)/2;
	if(a[mid]==key)
	{
		return mid;
	}
	else if(a[mid]>key)
	{
		return BinaryA(a,low,mid-1,key);
	}
	return BinaryA(a,mid+1,high,key);
}
int Search(int a[],int n,int key)
{
	int mid = Maximum(a,n);
	int left = BinaryA(a,0,mid-1,key);
	
	int right = BinaryD(a,mid,n-1,key);
	
	if(left<0)
	{
		return right;
	}
	else left;
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
	int ans = Search(a,n,key);
	cout<<ans<<"\n";
}
