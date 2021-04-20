#include<bits/stdc++.h>
using namespace std;
int MinimumDifference(int a[],int n,int key)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
			return a[mid];
		}
		else if(a[mid]>key)
		{
			high = mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(abs(a[high]-key) <= abs(a[low]-key))
	{
		return a[high];
	}
	return a[low];
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
	int ans = MinimumDifference(a,n,key);
	cout<<ans<<"\n";
}
