#include<stdio.h>
double n, e = 1;
long long mul(int);
int main()
{
	scanf_s("%lf", &n);
	for (int i = 1; i <= n; i++)
	{
		e += 1.0/mul(i);
	}
	printf("%.10lf", e);
	return 0;
}

long long mul(int i)
{
	long long z = 1;
	for (int k = 1; k <= i; k++)
	{
		
		z *= k;
		
	}
	return z;
}