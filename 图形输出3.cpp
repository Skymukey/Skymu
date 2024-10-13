#include<stdio.h>
int n, m = 0;
int main()
{
	scanf_s("%d", &m);
	for (int i = 1; i <= m; i++)
	{
		for (int k =0;k<m-i;k++)
		{
			printf(" ");
		}
		for (int t = 0;t < 2 * i-1;t++)
		{
			printf("*");
		}
		for (int h = 0;h<m-i;h++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}