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
int number(int num,string output[])
{
	if(num==0 || num==1)
	{
		output[0]="";
		return 1;
	}
	int n1=num/10;
	int n2=num%10;
	int small=number(n1,output);
	string str=getstring(n2);
	int s=str.size();
	for(int i=0;i<s-1;i++)
	{
		for(int j=0;j<small;j++)
		{
			output[j+(i+1)*small]=output[j];
		}
	}
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<small;j++)
		{
			output[j+i*small]=output[j+i*small]+str[i];
		}
	}
	return small*s;
}
int main()
{
	int num;
	cin>>num;
	string output[1000];
	int ans=number(num,output);
	for(int i=0;i<ans;i++)
	{
		cout<<output[i]<<"\n";
	}
}
