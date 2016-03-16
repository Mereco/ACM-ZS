#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x=0;
	cin>>x;
	double b=sqrt(x);
	cout<<setiosflags(ios::fixed) << setprecision(2) << b;
	return 0;
}
