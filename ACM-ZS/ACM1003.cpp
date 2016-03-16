#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a=0,b=0,c=0,d=0,e=0;
	cin>>a;
	cin>>b;
	d=a+b;
	c=a*b;
	e=c/d;
	cout <<setiosflags(ios::fixed)<<setprecision(2)<<e<<" "<<d;
	return 0;
}