#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.1415927;
int main()
{
	double r=0,s=0;
	cin>>r;
	s=PI*r*r;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl;
	return 0;
}
