#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
	if(a<b)
	{
		return gcd(b,a);
	}
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
	long long g=gcd(a,b);
	return (a*b)/g;
}
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<lcm(a,b)<<"\n";
}
