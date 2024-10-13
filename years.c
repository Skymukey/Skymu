#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a = 0;
int main()

{
	scanf("%d", &a);
	if (a % 400 == 0)
	{
		printf("Y");
	}
	else if ((a % 4 == 0)&( a % 100 != 0))
	{
		printf("Y");
	}
	else
	{

		printf("N");
	}


	return 0;
}