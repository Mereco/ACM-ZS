#include<iostream>
using namespace std;
int main()
{
	int m=0,n=0,x1=0,x2=0;
	cin>>m;
	
	for (int i=0;i<m;++i)
	{
		cin>>n;
		x2=1;
		while(n>1)
		{
			x1=(x2+1)*2;
			x2=x1;
			n--;
		}
		cout<<x1<<endl;
	}
	return 0;
}