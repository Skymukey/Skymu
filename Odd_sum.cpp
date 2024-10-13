#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int m, n,sum = 0;
int main()
{
	scanf("%d %d", &m, & n);
	for (m; m <= n; m++)
	{
		if (m % 2!= 0)
		{
			sum += m;
		}
	}
	printf("%d", sum);
	return 0;
}