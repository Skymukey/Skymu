#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s[10][10] = { 0 };
int n, i, j = 0;

int main()
{
	scanf("%d %d %d", &n, &i, &j);
	for (int a = 1; a <= n; a++)
	{
		printf("(%d,%d) ", i, a);
	}
	printf("\n");
	for (int a = 1; a <= n; a++)
	{
		printf("(%d,%d) ", a, j);
	}
	printf("\n");
	for (int a = 1; a <= n; a++) 
	{
		for (int b = 1; b <= n; b++) 
		{
			if (i - j == a - b) 
			{
				printf("(%d,%d) ",a,b);
			}
		}
	}
	printf("\n");
	for (int a = n; a >= 1; a--)
	{
		for (int b = 1; b <= n; b++)
		{
			if (i + j == a + b)
			{
				printf("(%d,%d) ", a, b);
			}
		}
	}
	printf("\n");
	return 0;
}