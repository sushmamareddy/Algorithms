/*
Given an array, you have to find the floor of a number x. 
The floor of a number x is nothing but the largest number in the array less than or equal to x.

If floor not found, print the value of "INT_MIN"
*/
#include<bits/stdc++.h>
using namespace std;
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
	int low=0;
	int high=n-1;
	int ans = INT_MIN;
	sort(a,a+n);
	int flag=1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
			cout<<key<<"\n";
			flag=0;
			break;
		}
		else if(a[mid]>key)
		{
			high=mid-1;
		}
		else if(a[mid]<key && a[mid+1]>key)
		{
			cout<<a[mid]<<"\n";
			flag=0;
			break;
		}
		else if(high==low && a[mid]<key)
		{
			cout<<a[mid]<<"\n";
			flag=0;
			break;
		}
		else
		{
			low=mid+1;
		}		
	}
	if(flag)
	{
		cout<<ans<<"\n";
	}
}
