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
	
	int min=a[j];
	int minindex=j;
	for(int i=j+1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			minindex=i;
		}
	}
	int temp=a[j];
	a[j]=a[minindex];
	a[minindex]=temp;
}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
