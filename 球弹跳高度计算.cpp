#include<stdio.h>
double h,sum = 0;
int main()
{
	scanf_s("%lf", &h);
	sum = h;
	while (h > 0.00001)
	{
		sum += h;
		h /= 2;
	}
	printf("%.8lf", sum);
	return 0;
}