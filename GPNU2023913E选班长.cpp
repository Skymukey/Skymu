#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n, m = 0;
int a[100] = { 0 };

int main()
{
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n;j++)
		{
			int x = 0;
			scanf("%d", &x);
			if (x == 1)
			{
				a[i]++;
			}
		}
	}
	int max = a[0];
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			result = i;
		}
	}
	printf("%d", result);
	return 0;
}