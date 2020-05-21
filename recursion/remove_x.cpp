#include<bits/stdc++.h>
using namespace std;
void remove(char *input)
{
	if(strlen(input)==0)
	{
		return;
	}
	remove(input+1);
	if(input[0]=='x')
	{
		int l=strlen(input);
		for(int i=0;i<l;i++)
		{
			input[i]=input[i+1];
		}
		input[l-1]='\0';
	}
}
int main()
{
	char *input=new char[100];
	cin>>input;
	remove(input);
	cout<<input<<"\n";
}
