#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s[20][20] = { 0 };
int n = 0;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d" ,&s[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (n % 2 != 0)
		{
			if (i == n / 2)
			{
				continue;
			}
		}
		s[i][i] += 10;
	}
	for (int i = n - 1; i >= 0; i--)
	{
	
		s[i][n - 1 - i] += 10;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}