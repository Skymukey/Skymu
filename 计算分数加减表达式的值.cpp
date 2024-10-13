#include<stdio.h>
double n, s = 0;
double temp = 1.0;

int main()
{
	scanf_s("%lf", &n);
	for (int i = 1; i <= n; i++)
	{
		s += temp * 1 / i;
		temp = -temp;
	}
	printf("%.4lf", s);
	return 0;
}