#include<iostream>
using namespace std;
class Areacopy
{
	public:
	double h,w,l,a,v;
	Areacopy()
	{
		cout<<"Enter Height :";
		cin>>h;
		cout<<"width :";
		cin>>w;
		cout<<"Length : ";
		cin>>l;
	}
	Areacopy(Areacopy &o)
	{
		h=o.h;
		w=o.w;
		l=o.l;
	}
	void calc()
	{
		a=2*(l*w+l*h+h*w);
		v=l*w*h;
		cout<<"\nArea = "<<a<<"\nVolume = "<<v;
	}
};
int main()
{
	Areacopy a;
	a.calc();
	Areacopy a1(a);
	a1.calc();
	return 0;
}
