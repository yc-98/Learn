#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	
	A()
	{
		cout<<"Default constructor called\nEnter a integer :";
		cin>>x;
	}
	A(int a)
	{
		cout<<"\nconstructor with 1 parameter called : "<<a<<"stored in object\n";
		x=a;
	}
	~A()
	{
		cout<<"Destructor called\n"<<this->x<<" deleted\n";
	}
};

int main()
{
	A obj;
	A obj1(99);
	return 0;
}
