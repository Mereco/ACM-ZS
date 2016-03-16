#include<iostream>
using namespace std;
int main()
{
	int s=0,k=0,h=0,i,a=1,b=1,c=1,m=0,u=0,o=0;
	cin>>s>>k;
	h=s-k;
	for(i=1;i<=s;i++)
		a=a*i;
	for(u=1;u<=k;u++)
		b=b*u;
	for(o=1;o<=h;o++)
		c=c*o;
	m=a/(b*c);
	cout<<m<<endl;
	return 0;
}