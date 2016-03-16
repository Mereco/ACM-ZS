#include<iostream>
using namespace std;
int main()
{
	int n=0,m=0,i=0,k=0;
	cin>>n>>m;
	k=n>m?n:m;
	for(i=k;i<=n*m;i++)
		if(i%n==0  &&  i%m==0  )
			break;
	cout<<i<<endl;
	return 0;
}