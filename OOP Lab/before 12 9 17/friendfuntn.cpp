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
		friend void disp(A o1,B o2);
};

class B
{
	int b;
	public:
		B()
		{
			cout<<"enter the value of b : "<<"\n";
			cin>>b;
		}
		friend void disp(A o1,B o2);
};
void disp(A o1,B o2)
{
	int d;
	if(o1.a<o2.b)
	d=o2.b;
	else
	d=o1.a;
	cout<<"Greatest number is : "<<d;
}
int main()
{
	A obj;
	B obj1;
	disp(obj,obj1);
	return 0;
}
