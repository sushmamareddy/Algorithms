#include<bits/stdc++.h>
using namespace std;
void pairstar(char *input)
{
	if(strlen(input)==0)
	{
		return;
	}
	pairstar(input+1);
	if(input[0]==input[1])
	{
		int l=strlen(input);
		for(int i=l-1;i>=1;i--)
		{
			input[i+1]=input[i];
		}
		input[1]='*';
	}
}
int main()
{
	char *input=new char[100];
	cin>>input;
	pairstar(input);
	cout<<input<<"\n";
}
