#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int low,int high)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==1 && a[mid-1]<1)
		{
			return mid;
		}
		else if(a[mid]==1 && a[mid-1]==1)
		{
			high=mid-1;
		}
		else if(a[mid]>1)
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
int Position(int a[])
{
	int low=0;
	int high=1;
	while(a[high]<1)
	{
		low=high;
		high=high*2;
	}
	int ans = BinarySearch(a,low,high);
	return ans;
}
int main()
{
	int t=20;
	while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans = Position(a);
	cout<<ans<<"\n";
}
}
