#include<iostream>
using namespace std;
int main()
{
	int x=0,a=0,b=0,c=0,y=0;
	cin>>x;
	a=x/100;
	b=(x%100)/10;
	c=x%10;
	y=a*a*a+b*b*b+c*c*c;
	if(x==y)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
