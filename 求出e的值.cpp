#include<stdio.h>
double e = 1;
long long n, k = 0;

int main()
{
	scanf_s("%lld", &n);
	for (int i = 1; i <= n; i++)
	{
		k = 1;
		for (int j = 1; j <= i; j++)
		{
			k *= j;
		}
		e += 1.0 / k;
	}
	printf("%.10lf", e);
	return 0;
}