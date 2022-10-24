//find all prime-numbers between 1 to N 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=1;
	}
	a[0]=0;
	a[1]=0;
	for(int i=2;i<sqrt(n);i++)
	{
		for(int j=i*i;j<n;j=j+i)
		{
			if(j%i==0)
			{
				a[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			cout<<i<<" ";
		}
	}
}
