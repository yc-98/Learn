#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"Constructor called implicitly\n";
	}
	~A()
	{
		cout<<"Destructor  called implicitly";
	}
};
int main()
{
	A obj;
	return 0;
}
