#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b = 0;
int main()
{
	scanf("%d %d", &a, &b);
	if ((a < 60 & b >= 60) || (a >= 60 & b < 60))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;

}