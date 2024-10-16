#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s[100][100] = { 0 };
int m, n = 0;

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &s[i][j]);
		}
	}
	for (int j = 0; j < m; j++)
	{
		for (int i = n - 1; i >= 0; i--)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}

	return 0;
}