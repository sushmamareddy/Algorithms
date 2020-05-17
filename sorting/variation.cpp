/*
We say that two integers x and y have a variation of at least K, if |x - y| = K 
(the absolute value of their difference is at least K). Given a sequence of N integers a1,a2,...,aN and K, 
the total variation count is the number of pairs of elements in the sequence with variation at least K, i.e. it is the size of the set of pairs
{(i,j)|1=i<j=N and|ai-aj|=K}
For example if K = 1 and the sequence is 3,2,4 the answer is 3. If K = 1 and the sequence is 3, 1, 3 then the answer is 2.
Your task is to write a program that takes a sequence and the value K as input and computes the total variation count.
Sample Input
3 1 
3 1 3

Sample Output
2
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		long long value=a[i]+k;
		int index=lower_bound(a,a+n,value)-a;
		count=count+(n-index);
	}
	cout<<count<<"\n";
}
