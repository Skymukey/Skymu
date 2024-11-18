#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int n, m = 0;
string s;
int a[32][32] = { 0 };
int q1, q2, p1, p2 = 0;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		for (int j = 1; j <= m; j++)
		{
			int b = j - 1;
			if (s[b] == '.')
			{
				a[i][j] = a[i-1][j] + a[i][j-1]-a[i-1][j-1];
			}
			else
			{
				a[i][j] = a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1]+ 1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			for (int k = i; k <= n; k++)
			{
				for (int l = j; l <= m; l++)
				{
					if ((k - i+1) * (l - j+1) <= (q2 - q1+1) * (p2 - p1+1))
						continue;
					if (a[k][l] - a[i - 1][l] - a[k][j - 1] + a[i - 1][j - 1] == 0)
					{
						q1 = i;
						q2 = k;
						p1 = j;
						p2 = l;
					}

				}
				
			}
		}
	}
	cout << q1 << " " << p1 << " " << q2 << " " << p2;
	return 0;
}