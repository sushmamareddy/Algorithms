#include<bits/stdc++.h>
using namespace std;
int substring(string s,string output[])
{
	if(s.size()==0)
	{
		output[0]=" ";
		return 1;
	}
	int sub=substring(s.substr(1),output);
	for(int i=0;i<sub;i++)
	{
		output[i+sub]=s[0]+output[i];
	}
	return 2*sub;
	
}
int main()
{
	string s;
	cin>>s;
	string *output=new string[1000];
	int count=substring(s,output);
	for(int i=0;i<count;i++)
	{
		cout<<output[i]<<" ";
	}
}
