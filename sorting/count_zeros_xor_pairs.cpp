/*
Given an array A[] of size N. 
Find the number of pairs (i, j) such that  A_i  XOR  A_j  = 0, and 1 <= i < j <= N.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int i=0,j=0,c=0;
	    long long ans=0;
	    while(i<n && j<n)
	    {
	        if(a[i]==a[j])
	        {
	            j++;
	            c++;
	        }
	        else
	        {
	            i=j;
	            j=j+1;
	            ans=ans+((c*(c-1))/2);
	            c=1;
	        }
	    }
	    
	        ans+=((c*(c-1))/2);
	    cout<<ans<<endl;
	}
	return 0;
}
