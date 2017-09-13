#include<iostream>
using namespace std;
class A
{
	public:
	
	A(int a)
	{
		cout<<"Constructor called Explicitly\n";
		cout<<"Value passed : "<<a;
	}
	~A()
	{
		cout<<"\nDestructor  called explicitly";
	}
};
int main()
{
	A obj=A(100);
	A::~A;
	return 0;
}
