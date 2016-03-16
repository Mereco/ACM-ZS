#include<iostream>
using namespace std;
int main()
{
	int n, m,os=0,js=0;
	while (cin >> m >> n)
	{
		for (int i = m; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				os = os+i*i;

			}
			else if (i % 2 == 1)
			{
				js = js+i*i*i;
			}
		}
		cout << os << " " << js << endl;
		os = 0;
		js = 0;

	}
	return 0;
}