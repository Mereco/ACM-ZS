#include<iostream>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int year,month;
	cin>>year>>month;
	if(year%400==0||year%4==0&&year%100!=0)
		a[2]=29;
	cout<<a[month]<<endl;
	return 0;
}



