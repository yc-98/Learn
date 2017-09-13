#include<iostream>
using namespace std;
class hcf
{
	int x,y,h;
	public:
		hcf()
		{
			cout<<" enter 2 numbers :\n";
			cin>>x>>y;
		}
		void calc()
		{
			int i,s;
			if(x>y)
			s=y;
			else
			s=x;
			h=1;
			for(i=2;i<=s;i++)
			{
				if(x%i==0 && y%i==0)
				h=i;
			}
			cout<<"\nHCF = "<<h;
		}
};
int main()
{
	hcf o;
	o.calc();
	return 0;
}
