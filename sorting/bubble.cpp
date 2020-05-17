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
	for(int j=0;j<n-1;j++){
	
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
