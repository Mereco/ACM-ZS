#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x=0;
	cin>>x;
	double a=fabs(x);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<a<<endl;
	return 0;
}