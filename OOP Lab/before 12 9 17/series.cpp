#include<iostream>
using namespace std;
class sum
{
	
	double n,x,i,s,t;
	public:
	sum()
	{
		s=1;
		t=1;
		cout<<"enter the value of n : ";
		cin>>n;
		cout<<"enter the value of x : ";
		cin>>x;
	}
	
	void calc()
	{
	
		for(i=2;i<=n+1;i++)
		{
			t=t*(x/(i-1));
			s=s+t;
		}
	}
	void print()
	{
		cout<<"sum of the series = "<<s;
	}
};
int main()
{
	sum o;
	o.calc();
	o.print();
	return 0;
}
