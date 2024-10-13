#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x, y,z;
int main()
{
	scanf("%d %d", &x,&y);
	z = 87 * x + 85 * y;
	printf("%d", z / (x + y));

	return 0;
}