#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a = 0;
int main()
{
	scanf("%d", &a);
	if (a % 2 == 0)
	{

		printf("Even");
	}
	else
	{

		printf("ODD");
	}

	return 0;
}