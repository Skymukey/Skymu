#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b, c, d, e , f, g= 0;

int main()
{
	scanf("%d", &a);
	b = a / 100;
	c = a % 100 / 10;
	d = a % 10;
	e = b * b * b;
	f = c * c * c;
	g = d * d * d;
	if (e + f + g == a)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}



	return 0;
}