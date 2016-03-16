#include<iostream>
using namespace std;
int main()
{
	int sum=0,m=0,a=0;
		while(cin>>m)
		{
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