#include<stdio.h>
int n,sum = 0,x = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		sum += x;

	}
	printf("%d", sum);
	return 0;
}