#include<bits/stdc++.h>
using namespace std;
bool triplet(int a[],int n)
{
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		int j=i+1;
		int k=n-1;
		while(j<k)
		{
			if(a[i]+a[j]+a[k] == 0)
			{
				return true;
			}
			else if(a[i]+a[j]+a[k]<0)
			{
				j++;
			}
			else
			{
				k--;
			}
		}
	}
	return false;
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
	bool ans=triplet(a,n);
	if(ans)
	{
		cout<<"found\n";
	}
	else
	{
		cout<<"not found\n";
	}
}
