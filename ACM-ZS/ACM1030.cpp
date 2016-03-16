#include<iostream>
using namespace std;
int main()
{
	int n=0,m=0,i=0,k=0;
	cin>>n>>m;
	k=n<m?n:m;
	for(i=k;i>=1;i--)
		if(n%i==0  &&  m%i==0  )
			break;
	cout<<i<<endl;
	return 0;
}