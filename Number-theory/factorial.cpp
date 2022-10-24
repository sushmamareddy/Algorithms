#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int fact=1;
	for(long long int i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	cout<<fact<<"\n";
	
}
