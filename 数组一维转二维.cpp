#include<stdio.h>
int n = 0;
int s[40] = { 0 };
int m[40][40] = { 0 };

int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &m[0][i]);
	}
	for (int i = 1; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			if (k == n - 1)
			{
				m[i][k] = m[i - 1][0];
			}
			else
			m[i][k] = m[i - 1][k + 1];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			printf("%d ", m[i][k]);
		}
		printf("\n");
	}
	return 0;
}
