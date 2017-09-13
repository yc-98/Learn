#include<iostream>
using namespace std;
class pal
{
	int n,d,x,s;
	public :
	pal()
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
			s=s*10+d;
			x=x/10;
		}
		if(s==n)
		cout<<"palindrome Number\n";
		else
		cout<<"Not palindrome number\n";
	}
};
int main()
{
	pal o;
	o.calc();
	return 0;
}
