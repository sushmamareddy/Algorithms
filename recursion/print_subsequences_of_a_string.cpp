#include<bits/stdc++.h>
using namespace std;
void substring(string input,string output)
{
	if(input.size()==0)
	{
		cout<<output<<"\n";
		return;
	}
	substring(input.substr(1),output);
	substring(input.substr(1),output+input[0]);
}
int main()
{
	string s;
	cin>>s;
	string output="";
	substring(s,output);
}
