#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long n, t, f = 0;
int count = 0;
long long x ,a= 0;
long long k = 0;

int main()
{
	scanf("%lld %lld %lld", &n, &t, &f);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld %lld",&x, &a);
		if (a - t + f - x <= 0)
		{
			count++;
		}
	}


	printf("%d", count);
	return 0;
}