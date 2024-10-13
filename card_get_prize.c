#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b = 0;
int main()
{
	scanf("%d %d", &a, &b);
	if (a >= 10)
	{
		printf("1");
	}
	else if (b >= 20)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}