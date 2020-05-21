#include<bits/stdc++.h>
using namespace std;
void replace(char *input,char char1,char char2)
{
	if(strlen(input)==0)
	{
		return;
	}
	replace(input+1,char1,char2);
	if(input[0]==char1)
	{
		input[0]=char2;
	}
}
int main()
{
	char *input=new char[100];
	cin>>input;
	char char1,char2;
	cin>>char1>>char2;
	replace(input,char1,char2);
	cout<<input<<"\n";
}
