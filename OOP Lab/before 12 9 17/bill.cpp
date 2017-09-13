#include<iostream>
using namespace std;
class bill
{
	float a;
	int u;
public:
	bill()
	{
		a=0;
		u=0;
	}

	void inp()
	{
		cout<<"enter number of units:";
		cin>>u;
	}
	void cnp()
	{
		if(u<=100)
		a=u*.5;
		else if(u<=300)
		a=50+(u-100)*.8;
		else
		{
			a=50+160+(u-300)*1.3;
			a+=a*.15;
		}
		if(a<70)
		a=70;
	cout<<"Net billing amount : Rs"<<a;
	}
	
};
int main()
{
	int u;
	bill o;
	o.inp();
	o.cnp();
	return 0;
}
