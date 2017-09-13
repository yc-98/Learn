#include<iostream>
using namespace std;
class arm
{
	int n,d,x,s;
	public :
	arm()
	{
		cout<<"Enter no to check : ";
		cin>>n;
	}
	void calc()
	{
		x=n;
		s=0;
		while(x!=0)
		{
			d=x%10;
			s=s+d*d*d;
			x=x/10;
		}
		if(s==n)
		cout<<"Armstrong Number\n";
		else
		cout<<"Not Armstrong number\n";
	}
};
int main()
{
	arm o;
	o.calc();
	return 0;
}
