#include <iostream>
using namespace std;
void towerOfHanoi(int n,char source,char auxilliary,char destination)
{
	if(n==0)
	{
		return;
	}
	if(n==1)
	{
		cout<<source<<" "<<destination<<"\n";
		return;
	}
	towerOfHanoi(n-1,source,destination,auxilliary);
	cout<<source<<" "<<destination<<"\n";
	towerOfHanoi(n-1,auxilliary,source,destination);
}
int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}

