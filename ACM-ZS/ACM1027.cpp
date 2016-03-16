#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
	int x,b,i;                
	cin>>x; 
	if(x<2)                 
		cout<<"no";
	else
	{
		b=sqrt(x);
		for(i=2;i<=b;i++)
			if(x%i==0) break;
		if(i>=b+1)
			cout<<"yes";
		else
			cout<<"no";
	}
	return 0;
}