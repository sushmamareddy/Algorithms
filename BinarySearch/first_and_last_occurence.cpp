#include<bits/stdc++.h>
using namespace std;
int firstbinarysearch(int a[],int n,int key)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key && a[mid-1]<key)
		{
			return mid;
		}
		else if(a[mid]==key && a[mid-1]==key)
		{
			high = mid-1;
		}
		else if(a[mid]>key)
		{
			high = mid-1;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
	}
	return -1;
}
int lastbinarysearch(int a[],int n,int key)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key && a[mid+1]>key)
		{
			return mid;
		}
		else if(a[mid]==key && a[mid+1]==key)
		{
			low=mid+1;
		}
		else if(a[mid]>key)
		{
			high=mid-1;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
	}
	return -1;
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
	int first = firstbinarysearch(a,n,key);
	int last =  lastbinarysearch(a,n,key;
	cout<<"first occurence : "<<first<<"\n";
	cout<<"last occurence : "<<last<<"\n";
}
