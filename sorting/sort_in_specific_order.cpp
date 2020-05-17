/*
Given an array A of positive integers. 
Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order,
 rest portion contains even numbers sorted in ascending order.
 
Input:
2
7
1 2 3 5 4 7 10
7
0 4 5 3 7 2 1

Output:
7 5 3 1 2 4 10
7 5 3 1 0 2 4
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int i=0,j=n-1,k=0;
	    while(i<=j)
	    {
	        if(a[i]%2==0)
	        {
	            int temp=a[j];
	            a[j]=a[i];
	            a[i]=temp;
	            j--;
	        }
	        else
	        {
	            k++;
	            i++;
	        }
	    }
	    sort(a,a+k,greater<int>());
	    sort(a+k,a+n);
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
