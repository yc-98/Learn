#include<iostream>
using namespace std;
class A
{
	public:
	double h;
	A()
	{
		cout<<"\ndefault :Enter H :";
		cin>>h;
		cout<<h<<endl;
	}
	A(A &o)
	{
		h=o.h;
		cout<<"\ncopy : h="<<h;
	}
};
int main()
{
	A a;
	A a1(a);
	A b;
	b=a;
	cout<<"main : b in h"<<b.h;
	return 0;
}
