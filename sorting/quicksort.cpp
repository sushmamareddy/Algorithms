#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int start,int end)
{
	int pivot=a[start];
	int c=0;
	for(int i=start+1;i<=end;i++)
	{
		if(a[i]<=pivot)
		{
			c++;
		}
	}
	int index=start+c;
	a[start]=a[start+c];
	a[start+c]=pivot;
	int j=start;
	int k=end;
	while(j<index && index<k)
	{
		if(a[k]>pivot)
		{
			k--;
		}
		else if(a[j]<=pivot)
		{
			j++;
		}
		else
		{
			int temp=a[j];
			a[j]=a[k];
			a[k]=temp;
			j++;
			k--;
		}
	}
	return index;
}
void quicksort(int a[],int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int pindex=partition(a,start,end);
	quicksort(a,start,pindex-1);
	quicksort(a,pindex+1,end);
}
void quicksort(int a[],int n)
{
	if(n==0 || n==1)
	{
		return;
	}
	quicksort(a,0,n);
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
	quicksort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
