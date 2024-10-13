#include<stdio.h>
int n ,m= 0;
int main()
{
	scanf_s("%d",&n);
	int t = n;
	int sum = 0;
	if (n >= 0)
	{
		while (t > 9)
		{
			t /= 10;
			sum += 1;

		}
		for (int i = 0; i <= sum; i++)
		{
			m = m * 10 + n % 10;
			n /= 10;
		}
	}
	if (n < 0)
	{
		while (t <-9 )
		{
			t /= 10;
			sum += 1;

		}
		for (int i = 0; i <= sum; i++)
		{
			m = m * 10 + n % 10;
			n /= 10;
		}
	}
	printf("%d", m);
	return 0;
	
}