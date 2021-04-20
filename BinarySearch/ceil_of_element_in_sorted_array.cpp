#include<bits/stdc++.h>
using namespace std;
int FindCeil(int a[],int n,int key)
{
	int low=0;
	int high=n-1;
	int res=INT_MIN;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
			return a[mid];
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			res=a[mid];
			high = mid-1;
		}
		
	}
	return res;
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
	while(t--){
	int key;
	cin>>key;
	int ans = FindCeil(a,n,key);
	cout<<ans<<"\n";
}
}
