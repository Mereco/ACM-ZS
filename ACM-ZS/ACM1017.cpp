#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x=0,y=0,z=0,p=0,s1=0,s2=0;
	cin>>x>>y>>z;
	if(x+y>z&&x+z>y&&y+z>x)
	{
		p=(x+y+z)/2;
		s1=p*(p-x)*(p-y)*(p-z);
		double s2=sqrt(s1);
		cout<<setiosflags(ios::fixed) << setprecision(2) <<s2<<endl;
	}
	else
	{
		cout<<"not triangle"<<endl;
	}
	return 0;
}