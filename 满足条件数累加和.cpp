#include<stdio.h>
int m, n, sum = 0;
int main()
{
	scanf_s("%d %d", &m, &n);
	for (m; m <= n; m++)
	{
		if (m % 17 == 0)
		{
			sum += m;
		}
	}
	printf("%d", sum);
	return 0;
}