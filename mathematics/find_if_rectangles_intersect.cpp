#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int x3,y3,x4,y4;
	cin>>x3>>y3>>x4>>y4;
	int leftintersect=max(x1,x3);
	int rightintersect=min(x2,x4);
	int topintersect=min(y2,y4);
	int bottomintersect=max(y1,y3);
	if((bottomintersect > topintersect)|| (rightintersect < leftintersect))
	{
		cout<<"rectangles didnt intersect"<<"\n";
	}
	else
	{
		cout<<"rectangles intersected\n";
	}
	
}
