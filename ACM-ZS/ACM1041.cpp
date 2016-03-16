#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0,n=0,m=0;
	while(cin>>x>>y&&(x||y))
	{
		n=x*x+x+41;
		m=y*y+y+41;
		if(n>=-39&&n<=50&&m>=-39&&m<=50)
			cout<<"OK"<<endl;
		else
			cout<<"Sorry"<<endl;
		
	}
	return 0;
}