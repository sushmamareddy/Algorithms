#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	int smallans=factorial(n-1);
	return n*smallans;
}
int main()
{
	int n;
	cin>>n;
	int ans=factorial(n);
	cout<<ans<<endl;
}
