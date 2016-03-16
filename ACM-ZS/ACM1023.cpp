#include<iostream>
int main()
{
    char s[4], x;
    while (gets(s))
	{
        if (s[0]>s[1])
		{
            x=s[0];s[0]=s[1];s[1]=x;
        }
        if (s[0]>s[2])
		{
            x=s[0];s[0]=s[2];s[2]=x;
        }
        if (s[1]>s[2])
		{
            x=s[1];s[1]=s[2];s[2]=x;
        }
        printf("%c %c %c\n",s[0],s[1],s[2]);
    }
    return 0;
}