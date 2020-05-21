#include<bits/stdc++.h>
using namespace std;
int partition(int input[],int start,int end)
{
	int pivot=input[start];
	int c=0;
	for(int i=start+1;i<=end;i++)
	{
		if(input[i]<=pivot)
		{
			c++;
		}
	}
	int index=start+c;
	input[start]=input[start+c];
	input[start+c]=pivot;
	int j=start;
	int k=end;
	while(j<index && index<k)
	{
		if(input[k]>pivot)
		{
			k--;
		}
		else if(input[j]<=pivot)
		{
			j++;
		}
		else
		{
			int temp=input[j];
			input[j]=input[k];
			input[k]=temp;
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
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
