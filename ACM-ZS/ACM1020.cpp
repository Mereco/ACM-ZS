#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double p=0,w=0,s=0,d=0,f=0;
	cin>>p>>w>>s;
	if(s>=3000)
		d=0.15;
	else if(s>=2000)
		d=0.1;
	else if(s>=1000)
		d=0.08;
	else if(s>=500)
		d=0.05;
	else if(s>=250)
		d=0.02;
	else
		d=0;
	f=p*w*s*(1-d);
	cout<<fixed<<setprecision(2)<<f;
	return 0;
}