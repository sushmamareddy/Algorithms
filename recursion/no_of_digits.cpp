#include<bits/stdc++.h>
using namespace std;
int digits(int n)
{
	if(n==0)
	{
		return 0;
	}
	int smallans=count(n/10);
	return smallans+1;
}
int main()
{
	int n;
	cin>>n;
	int ans=digits(n);
	cout<<ans<<endl;
}
