#include<iostream>
using namespace std;
class convert
{
	public :
	int n;
	convert()
	{
		cout<<"Enter number in Decimal : ";
		cin>>n;
	}
	char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	void d2b(int y,int b)
	{
		if(y/b!=0)
		d2b(y/b,b);
		cout<<a[y%b];
	}
};
int main()
{
	convert o;
	cout<<"\nNumber in Octal : ";
	o.d2b(o.n,8);
	cout<<"\nNumber in Hexadecimal : ";
	o.d2b(o.n,16);
	return 0;
}

