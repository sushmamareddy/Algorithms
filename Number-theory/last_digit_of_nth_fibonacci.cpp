#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	n=n%60;
	int arr[60];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<60;i++)
	{
		arr[i]=(arr[i-1]+arr[i-2])%10;
	}
	cout<<(arr[n-1])%10<<"\n";
}
