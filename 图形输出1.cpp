#include<stdio.h>
int n, m = 0;
int main()
{
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}