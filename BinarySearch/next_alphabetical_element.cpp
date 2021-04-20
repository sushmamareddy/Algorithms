#include<bits/stdc++.h>
using namespace std;
char NextElement(char a[],int n,char key)
{
	int low=0;
	int high=n-1;
	char res='#';
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
			low=mid+1;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			res=a[mid];
			high=mid-1;
		}
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t=20;
	while(t--){
	char key;
	cin>>key;
	char ans = NextElement(a,n,key);
	cout<<ans<<"\n";
}
}
