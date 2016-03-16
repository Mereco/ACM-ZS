#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0;
	cin>>a;
	b=a%100;
	if(b>0)
	{
		c=a%4;
		if(c>0)
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<"yes"<<endl;
		}
	}
	else
	{
		d=a%400;
		if(d>0)
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}