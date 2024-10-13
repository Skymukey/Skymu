#include<stdio.h>
int a, b, c = 0;
int main()
{
	scanf_s("%d\n%d\n%d", &a, &b, &c);
	printf("%d", (a + b) * c / 2);



	return 0;
}