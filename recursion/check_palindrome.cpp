#include<bits/stdc++.h>
using namespace std;
bool check(char *input,int s,int e)
{
	if(s==e)
	{
		return true;
	}
	if(input[s]!=input[e])
	{
		return false;
	}
	if(s<e+1)
	{
		return check(input,s+1,e-1);
	}
}
int main()
{
	char *input=new char[100];
	cin>>input;
	int l=strlen(input);
	bool ans=check(input,0,l-1);
	if(ans)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome\n";
	}
}
