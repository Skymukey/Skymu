#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a = 0;
int main()
{
	scanf("%d", &a);
	if (a / 10 >= 1 & a / 10 < 10)
	{
		printf("1");
	}
	else
	{
		printf("0");

	}
	return 0;
}