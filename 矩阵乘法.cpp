#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n, m, k = 0;
long long a[100][100] = { 0 };
long long b[100][100] = { 0 };
int c[100][100] = { 0 };
long long x = 0;

int main()
{
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			scanf("%lld", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			x = 0;
			for (int p = 0; p < m; p++)
			{
				x += a[i][p] * b[p][j];
			}
			printf("%lld ", x);
		}
		printf("\n");
	}
	return 0;
}