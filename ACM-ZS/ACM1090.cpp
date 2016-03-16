#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int t;
	cin >> t;
	while (t--)
	{
		int r;
		int w;
		int q;
		int sum = 0;
		for (int i = 0; i <= 4; i++)
		{
			cin >> a[i];
		}
		int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		q = a[0] - 1;
		w = a[3] - a[0];
		if (w == 0)
		{
			r = a[4] - a[1];
			sum = a[2];
			for (int e = 0; e < r; e++)
			{
				sum = sum * 2;
			}
			cout << sum << endl;
		}
		else if (w == 1)
		{
			r = m[q] - a[1] + a[4];
			sum = a[2];
			for (int p = 0; p < r; p++)
			{
				sum = sum * 2;
			}
			cout << sum << endl;
		}
	}
	return 0;
}