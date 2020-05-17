/*
Given an array A[] of integers, sort the array according to frequency of elements.
 That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.
 Input:
2
5
5 5 4 6 4
5
9 9 9 2 5
Output:
4 4 5 5 6
9 9 9 2 5
*/
#include<bits/stdc++.h>
using namespace std;
bool func(pair<int,int>a,pair<int,int>b)
{
    if(a.second!=b.second)
    {
        return (a.second>b.second);
    }
    else
    {
        return (a.first<b.first);
    }
}
void sortByFreq(int arr[],int n)
{
    //Your code here
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    vector<pair<int,int>>v;
    for(auto it=m.begin();it!=m.end();it++)
    {
        v.push_back(make_pair(it->first,it->second));
    }
    sort(v.begin(),v.end(),func);
    for(auto it=v.begin();it!=v.end();it++)
    {
        int t=it->second;
        while(t--)
        {
            cout<<it->first<<" ";
        }
    }
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sortByFreq(a,n);
}
