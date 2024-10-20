#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[5][5] = { 0 };
int b = 1;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		int max = -99999999;
		int min = 99999999;
		
		int k = 0;
		for (int j = 0; j < 5; j++)
		{
			
			if (a[i][j] > max)
			{
				max = a[i][j];
				k = j;
			}
		}
		for (int j = 0; j < 5; j++)
		{

			if (a[j][k] < min)
			{
				min = a[j][k];
			}
		}
		if (min == max)
		{
			printf("%d %d %d\n", i + 1, k + 1, max);
			b = 0;
		}
		
	}
	if (b)
	{
		printf("not found\n");
	}
	return 0;
}