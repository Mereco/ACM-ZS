#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n=0,s=0,x=0,i=0;
	while(scanf("%d",&n)!=EOF)
	{
		s=1;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&x);
			if(x%2)s*=x;
		}
		printf("%d\n",s);
	}
	return 0;
}