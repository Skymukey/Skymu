#include<stdio.h>
int a, b,c = 0;
int main()
{
	scanf_s("%d\n%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d\n%d", a, b);
	return 0;
}