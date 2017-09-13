#include<iostream>
using namespace std;
class fibo
{
	public:
		int n;
	fibo()
	{
		cout<<"enter value of n :";
		cin>>n;
	}
	void disp()
	{
		int a=0,b=1,z=1;
		cout<<"fibonacci series :\n";
		if(n==0)
		cout<<"0 ";
		else
		{
			cout<<"0 1 ";n-=2;
			while(n--)
			{
				cout<<z<<" ";
				a=b;
				b=z;
				z=a+b;
			}
		}
				
	}
};
int main()
{
	fibo o;
	o.disp();
	return 0;
}
