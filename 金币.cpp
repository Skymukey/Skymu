#include<stdio.h>
int n = 0,m = 0;
int sum = 0;
int t = 1;
int x = 1;
int s = 0;
int main()
{
	scanf_s("%d", &n);
	while (m < n)
	{
		m += 1;
		s += 1;
		sum += t;
		if (s == x)
		{
			x += 1;
			t = x;
			s = 0;
		}
	}
	printf("%d", sum);
	return 0;
}