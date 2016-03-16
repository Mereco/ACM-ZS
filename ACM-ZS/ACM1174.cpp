#include<iostream>
using namespace std;
int main()
{
	int i=1,n=0,sum=0,z=0;
	cin>>n;
	while(i<=n)
	{
		sum+=i;
		i++;
		z=z+sum;
	}
	cout<<z<<endl;
	return 0;
}
