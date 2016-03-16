#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double c=0,f=0,a=0,b=0;
	cin>>c;
	a=c*9;
	b=a/5;
	f=b+32;
	cout <<setiosflags(ios::fixed)<<setprecision(2)<< f;
	return 0;
}