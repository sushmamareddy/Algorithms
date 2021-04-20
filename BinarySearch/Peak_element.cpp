#include<bits/stdc++.h>
using namespace std;
int PeakElement(int a[],int n)
{
	int low=0;
	int high = n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]>=a[mid-1] && a[mid]>=a[mid+1])
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
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans = PeakElement(a,n);
	cout<<ans<<"\n";
}
