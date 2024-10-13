#include<stdio.h>
int k= 0;
int i, sum = 0;
int main()
{
	scanf_s("%d",&k);
	for (i = 1000; i < 9999; i++)
	{
		int a = i % 100;
		int b = (i - a)/100;
		int c = a + b;
		int d = c * c;
		if (d == i)
		{
			sum += 1;
		}
		if (sum == k)
		{
			break;
		}
	}
	printf("%d", i);
	return 0;
}