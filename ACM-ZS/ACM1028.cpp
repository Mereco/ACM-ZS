#include<iostream>
using namespace std;
int main()
{
	int a=0,sum=0,k;
	cin>>a;
	while(a>0)
	{
		k=a%10;
		sum+=k;
		a=a/10;
	}
	cout<<sum<<endl;
	return 0;
}