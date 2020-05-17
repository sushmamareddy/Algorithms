#include<bits/stdc++.h>
using namespace std;
class loc
{
	public:
		int i;
		int j;
};
bool distinct(int a, int b, int c, int d){
    if(a!=b&&a!=c&&a!=d)
        if(b!=c&&b!=d)
            if(c!=d)
                return 1;
    return 0;
}
int main()
{
	int n,K;
	cin>>n>>K;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int flag=0;
	sort(arr,arr+n);
	unordered_map<string,int>m;
	string current="";
	int n1=(n*(n-1)/2);
	int sum[n1],k=0;
	loc l[n1];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum[k]=arr[i]+arr[j];
			l[k].i=i;
			l[k].j=j;
			k++;
		}
	}
	int a,b,c,d;
	for(int i=0;i<n1;i++)
	{
		for(int j=i+1;j<n1;j++)
		{
			if(sum[i]+sum[j]==K)
			{
				a=l[i].i;
				b=l[i].j;
				c=l[j].i;
				d=l[j].j;
				int temp[]={arr[a],arr[b],arr[c],arr[d]};
				sort(temp,temp+4);
				current=to_string(temp[0])+to_string(temp[1])+to_string(temp[2])+to_string(temp[3]);
				if(m[current]==0 && distinct(a,b,c,d))
				{
					cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<" "<<temp[3];
					m[current]++;
					flag=1;
				}
			}
		}
	}
	if(flag==0)
	{
		cout<<"-1"<<"\n";
	}
	else
	{
		cout<<"\n";
	}
}
