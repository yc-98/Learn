#include<iostream>
using namespace std;
inline void great(int a,int b,int c)
{
	int d;
	if(a>b)
	{
		if(a>c)
		d=a;
		else
		d=c;
	}
	else
	{
		if(b>c)
		d=b;
		else
		d=c;
	}
	cout<<"Greatest : "<<d;
}
int main()
{
	cout<<"Enter 3 numbers \n";
	int a,b,c;
	cin>>a>>b>>c;
	great(a,b,c);
	return 0;
}
