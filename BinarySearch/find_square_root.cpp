#include<bits/stdc++.h>
using namespace std;
int root(int n)
{
	if(n==1)
	{
		return 1;
	}
	int low =2;
	int high = (n/2);
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(mid*mid==n)
		{
			return mid;
		}
		else if(mid*mid < n)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
	}
	return low-1;
}
int main()
{
	int n;
	cin>>n;
	int ans = root(n);
	cout<<ans<<"\n";
}
