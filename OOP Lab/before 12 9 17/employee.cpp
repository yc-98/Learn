#include<iostream>
using namespace std;
class employee
{
	public:
		string empno,ename;
		double bpay,da,it,nsalary,gpay;
		employee()
		{
			cout<<"enter \nemployee name : ";
			cin>>ename;
			cout<<"employee number : ";
			cin>>empno;
			cout<<"basic pay : ";
			cin>>bpay;
		}
		void calc()
		{
			da=.52*bpay;
			gpay=da+bpay;
			it=.3*gpay;
			nsalary=bpay+da-it;
		}
		void disp()
		{
			cout<<"\n\temployee name : "<<ename;
			cout<<"\n\temployee number : "<<empno;
			cout<<"\n\tbasic pay : "<<bpay;
			cout<<"\n\tgross pay : "<<gpay;
			cout<<"\n\tDA : "<<da;
			cout<<"\n\tIT : "<<it;
			cout<<"\n\tNet salary : "<<nsalary;
		}
};
int main()
{
	int n;
	cout<<"Enter number of employee : ";
	cin>>n;
	while(n--)
	{
		employee o;
		o.calc();
		o.disp();
		cout<<"\n\t---------------------\n\n";
	}
	return 0;
}
