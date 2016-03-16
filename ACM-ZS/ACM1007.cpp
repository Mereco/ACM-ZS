#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,x=0,y=0;
	cin>>x;
	a=x/100;
	b=(x%100)/10;
	c=x%10;
	y=a+c+b;
	cout<<y<<endl;
	return 0;
}