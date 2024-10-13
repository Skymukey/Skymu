#include<stdio.h>
int n = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <=  n - 1; i++)
	{
		for (int k = 1; k <= n - i; k++)
		{
			printf(" ");
		}
		for (int h = 1; h <= 2 * i-1; h += 1)
		{
			printf("%d", i);
		}
		for (int k = 1; k <= n - i; k++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for (int t = 1; t <= 2 * n - 1;t++)
	{
		printf("%d", n);
	}
	printf("\n");
	for (int i = n - 1; i >= 1; i--)
	{
		for (int k = 1; k <= n - i; k++)
		{
			printf(" ");
		}
		for (int h = 1; h <= 2 * i-1; h += 1)
		{
			printf("%d", i);
		}
		for (int k = 1; k <= n - i; k++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
