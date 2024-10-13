#include<stdio.h>
int k = 0;
int a, b, c = 0;
int main()
{
	scanf_s("%d", &k);
	for (int i = 10; i < 99;i++)
	{
		a = i / 10;
		b = i % 10;
		c = b * 10 + a;
		if (c - i == k)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}