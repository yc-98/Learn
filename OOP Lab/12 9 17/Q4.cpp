#include<iostream>
using namespace std;
class post
{
	public:
	int w;
	int c;
	void calcndisp()
	{
		cout<<"enter weight : ";
		cin>>w;
		if(w<=15)
		c=2;
		else
		{
			int d=(w-15)/10;
			d*=10;
			if(d==(w-15))
			c=2+(w-15)/10;
			else
			c=2+(d+10)/10;
		}
			cout<<"Cost ="<<c<<endl;
	}
	void disp()
	{cout<<"cost = "<<c<<endl;	}
};
int main()
{
	int t;
	cout<<"Enter number of packages :";
	cin>>t;
	while(t--)
	{
		post p;
		p.calcndisp();
	}
	return 0;
}
