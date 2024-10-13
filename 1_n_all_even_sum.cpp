#include<stdio.h>
int n, sum = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 1 ;i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}