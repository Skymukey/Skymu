#include<stdio.h>
int x, y, m = 0;
char n ;
int main()
{
	scanf_s("%d %d ", &x, &y);
	scanf_s("%c", &n);
	scanf_s("%d", &m);
	if (m == 1)
	{


		for (int i = 0; i < x; i++)
		{
			for (int k = 0; k < y; k++)
			{
				printf("%c",n);
			}
			printf("\n");
		}
	}
	else
	{
		for (int k = 0; k < y; k++)
		{
			printf("%c",n);
		}
		printf("\n");
		for (int i = 2; i < x; i++)
		{
			printf("%c", n);
			for (int k = 2; k < y; k++)
			{
				printf(" ");
			}
			printf("%c",n);
			printf("\n");
		}
		for (int k = 0; k < y; k++)
		{
			printf("%c",n);
		}
		printf("\n");
	}
	return 0;
}