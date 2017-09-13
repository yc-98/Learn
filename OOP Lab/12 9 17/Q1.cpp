#include<iostream>
using namespace std;
class A
{
	public:
	static int x;

	A()
	{
		cout<<"Default constructor called\n";
	}
	void get()
	{
		cout<<"Enter a integer :";
		cin>>x;
	}
	~A()
	{
		cout<<"Destructor called "<<x<<" deleted\n";
	}
};
int A::x;

int main()
{
	A obj;
	obj.get();
	A obj1;
	return 0;
}
