#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m=0,n=0,a=0,k=0,i=0,x=0;
	cin>>m>>n;
	if(m<2)
		m=m+1;
	else if(m>=2)
		m=m;
	for(a=m;a<=n;a=a+1)
	{
		k=sqrt(a);
		for(i=2;i<=k;i++)
			if(a%i==0)  break;
		if(i>=k+1)
		{
			x++;
		}
	}
	cout<<x;
	return 0;
}