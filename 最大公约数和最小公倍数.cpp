#include<stdio.h>
int a, b,c,d = 0;
int main()
{
	scanf_s("%d %d", &a, &b);
	d = a * b;
	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	d = d / b;
	printf("%d %d",b, d);
	return 0;
}