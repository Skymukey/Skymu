#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n, m = 0;
int s[100][100] = { 0 };
int t[100][100] = { 0 };

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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i > 0 && i < n - 1 && j>0&&j < m - 1)
			{
				t[i][j] = (int)(((1.0*s[i][j] + s[i - 1][j] + s[i][j - 1] + s[i][j + 1] + s[i + 1][j]) / 5)+0.5);
			}
			else
			{
				t[i][j] = s[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}

	return 0;
}