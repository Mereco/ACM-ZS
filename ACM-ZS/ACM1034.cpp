#include<iostream>    
using namespace std; 
int main(){ 
    int f1=1,f2=1,t,n=0,x=0; 
	cin>>n;
	x=n;
	if(n<=1)
		cout<<f1<<endl;
	else if(n<=2)
		cout<<f2<<endl;
	else if(n>=3)
	{
		for(n=3;n<=x;n++)
	{ 
        t=f2; 
        f2=f1+f2; 
        f1=t; 
	}
    cout<<f2<<endl; 
	}
    return 0; 
}
