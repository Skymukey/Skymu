#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, n, p = 1;
int main()
{
	scanf("%d %d", &a, &n);
	for (int i = 1; i <= n; i++)
	{
		p *= a;
	}
	printf("%d", p);
	return 0;
}