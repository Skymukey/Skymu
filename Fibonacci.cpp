#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n = 0 ;
int x = 1, y= 1,num = 1;
int main()
{
	scanf("%d", &n);
	for (int i = 3; i <= n; i++)
	{
		num = x + y;
		x = y;
		y = num;
	}
	printf("%d", num);
	return 0;
}