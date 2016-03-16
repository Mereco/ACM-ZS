#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x1=0,y1=0,x2=0,y2=0,m=0,n=0,b=0;
	cin>>x1>>y1>>x2>>y2;
	m=(x2-x1)*(x2-x1);
	n=(y2-y1)*(y2-y1);
	b=m+n;
	double d=sqrt(b);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<d<<endl;
	return 0;
}