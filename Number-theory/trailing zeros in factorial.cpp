#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=5;i<=n;i=i*5)
	{
		count = count + (n/i);
	}
	cout<<count<<"\n";
}
//trailing zeros = [n/5]+[n/25]+[n/125]+.....
//O(logn)
