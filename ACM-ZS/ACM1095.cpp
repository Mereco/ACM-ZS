#include<iostream>
using namespace std;
int main()
{
	int n=0,sum=0,a=0;
	while(cin>>n&&n)
	{
		sum=0;
		while(n--)
		{
			cin>>a;
			sum=sum+a;
		}
		cout<<sum<<endl;
	}
	return 0;
}