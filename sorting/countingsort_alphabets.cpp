#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[100];
	cin>>arr;
	int a[26]={0};
	for(int i=0;arr[i]!='\0';i++)
	{
		int t=arr[i]-'a';
		a[t]++;
	}
	for(int i=1;i<26;i++)
	{
		a[i]=a[i]+a[i-1];
	}
	char ans[strlen(arr)];
	for(int i=0;i<strlen(arr);i++)
	{
		int t=arr[i]-'a';
		int t1=a[t];
		a[t]--;
		ans[t1-1]=arr[i];
	}
	cout<<ans;
}
