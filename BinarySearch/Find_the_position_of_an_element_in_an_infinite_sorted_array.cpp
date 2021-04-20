#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int low,int high,int key)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}
int Position(int a[],int key)
{
	int low=0;
	int high=1;
	while(key>a[high])
	{
		low=high;
		high=high*2;
	}
	int ans = BinarySearch(a,low,high,key);
	return ans;
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
	int t=20;
	while(t--) {
	int key;
	cin>>key;
	int ans =Position(a,key);
	cout<<ans<<"\n";

}
