#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long a, b = 0 ;
long long mul = 1;
int main()
{
	scanf("%lld %lld", &a, &b);
	for (a; a <= b; a++)
	{
		mul *= a;
		//printf("%lld\n", mul);
	}
	printf("%lld", mul);
	return 0;
}