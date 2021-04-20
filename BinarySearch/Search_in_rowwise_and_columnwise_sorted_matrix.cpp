#include<bits/stdc++.h>
using namespace std;
vector<int> Search(int **a,int n,int m, int key)
{
	int i = 0;
	int j = m-1;
	vector<int>ans;
	while(i<n && j>=0)
	{
		if(a[i][j]==key)
		{
			ans.push_back(i);
			ans.push_back(j);
			return ans;
		}	
		else if(a[i][j]<key)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	ans.push_back(-1);
	ans.push_back(-1);
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int **a;
	a = new int *[n];
	for(int i=0;i<n;i++)
	{
		a[i] = new int[m];
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	int key;
	cin>>key;
	vector<int>ans = Search(a,n,m,key);
	cout<<ans[0]<<" "<<ans[1]<<"\n";	
}
