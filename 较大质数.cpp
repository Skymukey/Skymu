#include<stdio.h>
#include<math.h>
long long n = 0;
int m = 0;
int main()
{
	scanf_s("%lld",&n);
	for (long long i = 2; i <= sqrt(n); i++)
	{
		m = 0;
		/*for (long long k = 1; i <= sqrt(i); i++)
		{
			if (i % k == 0)
			{
				m = 1;
				break;
			}
		}*/
		if (m == 0)
		{
			if (n % i == 0)
			{
				printf("%lld", n / i);
			}
		}
	}
	return 0;
}