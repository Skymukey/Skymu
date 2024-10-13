#include<stdio.h>
int m, n, a, sum = 0;
int main()
{
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d",&a);
		if (a <= m)
		{
			m -= a;
			sum += 1;
		}
	}
	printf("%d", n - sum);
	return 0;
}