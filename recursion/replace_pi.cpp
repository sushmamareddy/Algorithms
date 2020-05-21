#include<bits/stdc++.h>
using namespace std;
void replace(char *input)
{
	int l=strlen(input);
	if(l==0)
	{
		return;
	}
	replace(input+1);
	if(input[0]=='p' && input[1]=='i')
	{
		int l=strlen(input);
		for(int i=l;i>=2;i--)
		{
			input[i+2]=input[i];
		}
		input[0]='3';
		input[1]='.';
		input[2]='1';
		input[3]='4';
	}
}
int main()
{
	char *input=new char[100];
	cin>>input;
	replace(input);
	cout<<input<<"\n";
}
