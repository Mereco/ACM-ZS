#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a=0,b=0,c=0,i=0,n=0,j=0,k=0;
	cin>>n;
	j=n/5;
	k=n/3;
	for(a=1;a<=j;a++)
		for(b=1;b<=k;b++)
		{
			c=n-a-b;
			if(5*a+3*b+c/3.0==n)
			{
				i++;
			}
		}
		cout<<i;
		return 0;
}