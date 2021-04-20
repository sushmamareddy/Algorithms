#include<bits/stdc++.h>
using namespace std;
int sorted(int a[],int n)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]>=a[mid-1] && a[mid]>=a[mid+1])
		{
			return mid+1;
		}
		else if(a[mid]>=a[low])
		{
			low=mid;
		}
		else
		{
			
		}
	}
	return 0;
}
int main()
{
	int t=5;
	while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans = sorted(a,n);
	cout<<ans<<"\n";
}
}
