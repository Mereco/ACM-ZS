#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n=0,a=0,s=0,d=0,i=0,f=0;
	while(cin>>n&&n!=0)
	{
		while(n--)
		{
			cin>>a;
			if(a<0)
				s++;
			else if(a==0)
				d++;
			else
				f++;
		}
		cout<<s<<setw(2)<<d<<setw(2)<<f<<endl;
		s=0;
		d=0;
		f=0;
	}
	return 0;
}