#include<stdio.h>
int a , b , c , d = 0;
int main()
{
	scanf_s("%d", &a);
	b = a / 100;
	c = a %100  / 10;
	d = a % 10;
	if (d == 0)
	{
		printf("0%d", c * 10 + b);

	}
	else
	{
		printf("%d", d * 100 + c * 10 + b);
	}


	

	return 0;
}