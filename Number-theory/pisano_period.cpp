#include<bits/stdc++.h>
using namespace std;
int pisano(int m)
{
	int prev=0;
	int cur=1;
	int ans=1;
	for(int i=0;i<m*m;i++)
	{
		int temp=prev;
		prev=cur;
		cur=(temp+cur)%m;
		if(prev==0 && cur==1)
		{
			ans=i+1;
			break;
		}
	}
	return ans;
}
int main()
{
	int m;
	cin>>m;
	cout<<pisano(m)<<"\n";
}
