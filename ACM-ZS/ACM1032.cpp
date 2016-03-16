#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a=0,b=0,c=0,m=0,n=0,x=0,i=0,d=0;
	cin>>m>>n;
	if(m>=n)
	{
		d=m;
		m=n;
		n=d;
	}
	else
	{
		m=m;
		n=n;
	}
	for(x=m;x<=n;x++)
	{
		a=x/100;
		b=(x%100)/10;
		c=x%10;
		if(x==a*a*a+b*b*b+c*c*c)
		{
			i++;
		}
	}
	cout<<i;
	return 0;
}