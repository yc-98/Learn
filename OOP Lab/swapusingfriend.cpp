#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		A()
		{
			cout<<"enter the value of a : ";
			cin>>a;
		}
			void disp()
		{
			cout<<"Value of a :"<<a<<"\n";
		}
		friend void swap(A &o1,B &o2);
};

class B
{
	int b;
	public:
		B()
		{
			cout<<"enter the value of b : ";
			cin>>b;
		}
		void disp()
		{
			cout<<"Value of b :"<<b;
		}
		friend void swap(A &o1,B &o2);
};
void swap(A &o1,B &o2)
{
	int d;
	d=o1.a;
	o1.a=o2.b;
	o2.b=d;
}
int main()
{
	A obj;
	B obj1;
	swap(obj,obj1);
	obj.disp();
	obj1.disp();
	return 0;
}
