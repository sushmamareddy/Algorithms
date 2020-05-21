#include<bits/stdc++.h>
using namespace std;
int lastindex(int a[],int n,int key)
{
	if(n==0)
	{
		return -1;
	}
	int index=lastindex(a+1,n-1,key);
	if(index==-1)
	{
		if(a[0]==key)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return index+1;
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
	int key;
	cin>>key;
	int index=lastindex(a,n,key);
	cout<<index<<"\n";
}
