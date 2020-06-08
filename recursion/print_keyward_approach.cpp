#include<bits/stdc++.h>
using namespace std;
string getstring(int num)
{
	if(num==2)
	{
		return "abc";
	}
	if(num==3)
	{
		return "def";
	}
	if(num==4)
	{
		return "ghi";
	}
	if(num==5)
	{
		return "jkl";
	}
	if(num==6)
	{
		return "mno";
	}
	if(num==7)
	{
		return "pqrs";
	}
	if(num==8)
	{
		return "tuv";
	}
	if(num==9)
	{
		return "wxyz";
	}
	return "";
}
void printkeypad(int num,string output)
{
	if(num==0)
	{
		cout<<output<<"\n";
	}
	int n1=num%10;
	int n2=num/10;
	string s=getstring(n1);
	for(int i=0;i<s.size();i++)
	{
		printkeypad(n2,s[i]+output);
	}
}
int main()
{
	int num;
	cin>>num;
	string output="";
	printkeypad(num,output);
}
