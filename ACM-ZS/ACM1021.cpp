#include <iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int year,month,day,no;
	cin>>year>>month>>day;
    if(year%400==0||year%4==0&&year%100!=0)  
    switch(month)
    {
    case 1:
         no=day;
         break;
    case 2:
         no=31+day;
         break;
    case 3:
         no=1+31+28+day;
         break;
    case 4:
         no=1+31+28+31+day;
         break;
    case 5:
          no=1+31+28+31+30+day;
         break;
    case 6:
         no=1+31+28+31+30+31+day;
         break;
    case 7:
          no=1+31+28+31+30+31+30+day;
         break;
    case 8:
         no=1+31+28+31+30+31+30+31+day;
         break;
    case 9:
         no=1+31+28+31+30+31+30+31+31+day;
         break;
    case 10:
         no=1+31+28+31+30+31+30+31+31+30+day;
         break;
    case 11:
         no=1+31+28+31+30+31+30+31+31+30+31+day;
         break;
    case 12:
         no=1+31+28+31+30+31+30+31+31+30+31+30+day;
         break;
    return 0;
    }
    else 
    switch(month)
    {
    case 1:
         no=day;
         break;
    case 2:
         no=31+day;
         break;
    case 3:
         no=31+28+day;
         break;
    case 4:
         no=31+28+31+day;
         break;
    case 5:
          no=31+28+31+30+day;
         break;
    case 6:
         no=31+28+31+30+31+day;
         break;
    case 7:
          no=31+28+31+30+31+30+day;
         break;
    case 8:
         no=31+28+31+30+31+30+31+day;
         break;
    case 9:
         no=31+28+31+30+31+30+31+31+day;
         break;
    case 10:
         no=31+28+31+30+31+30+31+31+30+day;
         break;
    case 11:
         no=31+28+31+30+31+30+31+31+30+31+day;
         break;
    case 12:
         no=31+28+31+30+31+30+31+31+30+31+30+day;
         break;
    return 0;
    }
	cout<<no;
    return 0;
}