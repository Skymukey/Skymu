#include<stdio.h>
int n, i, sum= 0;
int main()
{
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);



	return 0;
}