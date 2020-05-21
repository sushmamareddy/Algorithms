#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int key)
{
	if(n==0)
	{
		return false;
	}
	if(a[0]==key)
	{
		return true;
	}
	bool smallans=check(a+1,n-1,key);
	return smallans;
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
	bool ans=check(a,n,key);
	if(ans)
	{
		cout<<"present\n";
	}
	else
	{
		cout<<"not present\n";
	}
}
