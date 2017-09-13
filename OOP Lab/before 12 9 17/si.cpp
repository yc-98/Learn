#include<iostream>
using namespace std;
class si
{
	float p,t,r,i;
	public :
	si()
	{
		cout<<"enter principal : RS";
		cin>>p;
		cout<<"enter rate  : ";
		cin>>r;
		cout<<"enter time in years : ";
		cin>>t;
	}
	void calc()
	{
		i=(p*r*t)/100;
		cout<<"Interest = RS"<<i;
	}
};
int main()
{
	si o;
	o.calc();
	return 0;
}
