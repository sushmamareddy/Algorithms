#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	while(n!=0)
	{
		int last = n%10;
		count++;
		n = n/10;
	}
	cout<<count<<"\n";
	/*
	another method : logarithmic solution
		count = floor(log10(n)+1)
	*/
	
	/*
	Recursive method :
		int count(int n){
		if(n==0)
			return 0
		return 1+count(n/10)
	}
	*/
}
