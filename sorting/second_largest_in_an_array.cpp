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
	int large=INT_MIN;
	int second=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			second=large;
			large=a[i];
		}
		else if(a[i]>=second && a[i]!=large)
		{
			second=a[i];
		}
	}
	cout<<"1st largest : "<<large<<"\n";
	cout<<"2nd largest : "<<second<<endl;
}
