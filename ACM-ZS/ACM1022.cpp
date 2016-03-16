#include<iostream>
using namespace std;
int main()
{
	char x,y;
	cin>>x;
	
	if(x>122)
		y=x;
	else if(x<97)
		y=x;
	else if(97<=x<=122)
		y=x-32;
	cout<<y<<endl;
	return 0;
}