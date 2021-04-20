#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int a[],int n,int key)
{
	int low =0;
	int high = n-1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high= mid-1;
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
	int ans = Binarysearch(a,n,key);
	cout<<ans<<"\n";
}
