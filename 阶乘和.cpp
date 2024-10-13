#include<stdio.h>
int n, s = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int x = 1;
		for (int k = 1; k <= i; k++)
		{
			 x *= k;
		}
		s += x;
	}
	printf("%d", s);
	return 0;
}