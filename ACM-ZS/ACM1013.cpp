#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	cin>>a>>b>>c;
	if(b>c)
	{
		if(a>b)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<b<<endl;
		}
	}
	else
	{
		if(a>c)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
	}
	return 0;
}

