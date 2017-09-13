#include<iostream>
using namespace std;
class check
{
	char s[100];
	int v,c,d,w;
	public :
	check()
	{
		v=0;
		c=0;
		d=0;
		w=0;
		cout<<"enter a string : ";
		gets(s);
	}
	void count()
	{
		int i;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]==' ')
			w++;
			if(s[i]>='0' && s[i]<='9')
			d++;
			if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
			{
			
				if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='E')
				v++;
				else
				c++;
			}
		}
		
	}
	void print()
	{
		cout<<"number of \nvowels = "<<v<<"\nconsonants = "<<c<<"\ndigits = "<<d<<"\nwhite space = "<<w;
	}
};
int main()
{
	check o;
	o.count();
	o.print();
	return 0;
}
