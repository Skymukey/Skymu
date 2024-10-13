#include<stdio.h>
int n = 0;
int x = 0;
int m,a,b,c = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 10; i <= 31; i++)
	{
		m = i * i;
		a = m / 100;
		b = m % 100 / 10;
		c = m % 10;
		if (a == b || a == c ||b == c)
		{
			x += 1;
		}
		if (x == n)
		{
			break;
		}
	}
	printf("%d", m);
	return 0;
}