/*
Given an array A of size N containing 0s, 1s, and 2s; 
you need to sort the array in ascending order.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
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
	    int i=0,nz=0,nt=n-1;
	    while(i<=nt)
	    {
	        if(a[i]==0)
	        {
	            int temp=a[nz];
	            a[nz]=a[i];
	            a[i]=temp;
	            i++;
	            nz++;
	        }
	        else if(a[i]==2)
	        {
	            int temp=a[nt];
	            a[nt]=a[i];
	            a[i]=temp;
	            nt--;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
