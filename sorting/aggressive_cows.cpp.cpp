/*
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).
His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, 
FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
Sample Input :
1
5 3
1
2
8
4
9
Sample Output:
3 
*/
bool check(long long n,long long c,long long a[],int mid)
{
	int count=1;
	int last=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]-last >=mid)
		{
			count++;
			last=a[i];
		}
		if(count==c)
	{
		return true;
	}
	}
	return false;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long c,n;
	cin>>n>>c;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	sort(a,a+n);		
	int start=0;
	int end=a[n-1]-a[0];
	int ans=-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(check(n,c,a,mid))
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	cout<<ans<<"\n";
}
