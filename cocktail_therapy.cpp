#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double a, b, c, d, e = 0;
int n = 0;
void compare(double, double);
int main()
{
	scanf("%d", &n);
	scanf("%lf %lf", &d,&e);
	c = 1.0 * e / d;
	for (int i = 1; i <= n - 1  ; i++)
	{
		scanf("%lf %lf", &a, &b);
		compare(a, b);
	}
	return 0;
}
void compare(double a, double b)
{
	if (1.0 * b / a - c > c * 0.05)
		printf("better\n");
	else if (c - 1.0 * b / a > c * 0.05)
		printf("worse\n");
	else
	{
		printf("same\n");
	}
}