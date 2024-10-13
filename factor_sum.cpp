#include<stdio.h>
#include<math.h>
long long x,y, sum = 0;
int main()
{
	scanf_s("%lld", &x);
	sum = 0;
	for (long long i = 1; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			if (x / i == i)
			{
				sum += i;
			}
			else
			{
				sum += i;
				sum += x / i;
			}
		}
	}
	printf("%lld", sum);
	return 0;
}