#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int n1,int *b,int n2,int *ans)
{
	int i,j,k;
	j=0,k=0;
	for(i=0;i<(n1+n2);)
	{
		if(j<n1 && k<n2)
		{
			if(a[j]<b[k])
			{
				ans[i]=a[j];
				j++;
			}
			else
			{
				ans[i]=b[k];
				k++;
			}
			i++;
		}
		else if(j==n1)
		{
			for(;i<(n1+n2);)
			{
				ans[i]=b[k];
				k++;
				i++;
			}
		}
		else
		{
			for(;i<(n1+n2);)
			{
				ans[i]=a[j];
				j++;
				i++;
			}
		}
	}
}
int main()
{
	int n1;
	cin>>n1;
	int *a=new int[n1];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	int n2;
	cin>>n2;
	int *b=new int[n2];
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	int *ans=new int[n1+n2];
	merge(a,n1,b,n2,ans);
	for(int i=0;i<n1+n2;i++)
	{
		cout<<ans[i]<<" ";
	}
	
}
