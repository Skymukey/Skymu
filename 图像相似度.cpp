#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[100][100] = { 0 };
int b[100][100] = { 0 };
int n,m = 0;
double result = 0;
int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == b[i][j])
			{
				count++;
			}
		}
	}
	result = 1.0 * count / (m * n);
	printf("%.2lf", result * 100);
	return 0;
}