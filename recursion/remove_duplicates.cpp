#include<bits/stdc++.h>
using namespace std;
void replace(char *input)
{
	int l=strlen(input);
	if(l==0 || l==1)
	{
		return;
	}
	replace(input+1);
	if(input[0]==input[1])
	{
		for(int i=1;i<strlen(input);i++)
		{
			input[i]=input[i+1];
		}
	}
}
int main()
{
	char *input=new char[100];
	cin>>input;
	replace(input);
	cout<<input<<"\n";
}
