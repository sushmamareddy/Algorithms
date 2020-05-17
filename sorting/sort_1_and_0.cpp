#include<bits/stdc++.h>
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
	    int i=0;
	    int j=n-1;
	    while(i<=j)
	    {
	        if(a[i]==0)
	        {
	            i++;
	        }
	        else if(a[i]==1)
	        {
	            int temp=a[j];
	            a[j]=a[i];
	            a[i]=temp;
	            j--;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
