/*
Chef is a cook and he has recently opened a restaurant.

The restaurant is open during N time intervals [L1,R1),[L2,R2),…,[LN,RN). 
No two of these intervals overlap — formally, for each valid i, j such that i?j, either Ri<Lj or Rj<Li.

M people (numbered 1 through M) are planning to eat at the restaurant; 
let's denote the time when the i-th person arrives by Pi. If the restaurant is open at that time,
 this person does not have to wait, but if it is closed, this person will wait until it is open. 
 Note that if this person arrives at an exact time when the restaurant is closing, they have to wait for the next opening time.
For each person, calculate how long they have to wait (possibly 0 time), or determine that they will wait forever for the restaurant to open.

Example Input
1
4 5
5 7
9 10
2 3
20 30
5
6
7
35
1
Example Output
0
0
2
-1
1
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++)
		{
			int l,r;
			cin>>l>>r;
			v.push_back(make_pair(l,r));
		}
		sort(v.begin(),v.end());
		for(int i=0;i<m;i++)
		{
			int time;
			cin>>time;
			int index=lower_bound(v.begin(),v.end(),make_pair(time,0))-v.begin();
			if(index==0)
			{
				int ans=v[0].first-time;
				cout<<ans<<"\n";
			}
			else
			{
				int ans=-1;
				if(v[index-1].second > time)
				{
					ans=0;
				}
				else if(index < v.size())
				{
					ans=v[index].first-time;
				}
				cout<<ans<<"\n";
			}
		}
		
	}
}
