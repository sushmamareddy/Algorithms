#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
	if(n==0 || n==1)
	{
		return true;
	}
	if(a[0]>a[1])
	{
		return false;
	}
	return check(a+1,n-1);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=00;i<n;i++)
	{
		cin>>a[i];
	}
	bool ans=check(a,n);
	if(ans)
	{
		cout<<"sorted\n";
	}
	else
	{
		cout<<"not sorted\n";
	}
}
