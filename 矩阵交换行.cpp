#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s[5][5] = { 0 };
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &s[i][j]);
		}
	}
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", s[n - 1][i]);
	}
	printf("\n");
	for (int i = m; i < n - 1; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", s[m - 1][i]);
	}
	printf("\n");
	for (int i = n; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}