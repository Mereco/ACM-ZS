#include<iostream>
using namespace std;
int main()
{
	int sum=0,m=0,n=0,a=0;
	cin>>n;
	while(n--)
	{
		cin>>m;
		sum=0;
		while(m--)
		{
			cin>>a;
			sum=sum+a;
		}
		cout<<sum<<endl;
	}
	return 0;
}