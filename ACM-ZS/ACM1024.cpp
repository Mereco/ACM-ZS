#include<iostream>
using namespace std;
int main()
{
	int m=0,n=0,sum=0;
	cin>>m;
	for (int i=0;i<m;++i)
	{
		cin>>n;
	for(int i=1;i<=n;i++)
		sum+=i;
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}