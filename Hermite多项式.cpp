#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double n, x = 0;

double h(double n, double x);

int main()
{
	scanf("%lf %lf", &n, &x);
	printf("%.2lf", h(n, x));
	return 0;
}

double h(double n, double x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2 * x;
	else
		return 2 * x * h(n - 1, x) - 2 * (n - 1) * h(n - 2, x);
}