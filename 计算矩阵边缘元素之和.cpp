#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s[100][100] = { 0 };
int n, m = 0;

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
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += s[0][i];
	}
	for (int i = 0; i < m; i++)
	{
		sum += s[n-1][i];
	}
	for (int i = 1; i < n-1; i++)
	{
		sum += s[i][0];
	}
	for (int i = 1; i < n - 1; i++)
	{
		sum += s[i][m-1];
	}
	if (n == 1 && m == 1)
	{
		sum = s[0][0];
	}
	else if (n == 1)
	{
		sum = 0;
		for (int i = 0; i < m; i++)
		{
			
			sum += s[0][i];
		}
	}
	else if(m == 1)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += s[i][0];
		}
	}
	printf("%d", sum);
	return 0;
}