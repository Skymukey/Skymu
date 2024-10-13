#include<stdio.h>
int m = 0;
int sum = 0, x = 0;
int main()
{
	scanf_s("%d", &m);
	int t = m;
	while (t > 9)
	{
		t /= 10;
		sum += 1;

	}
	for (int i = 0; i <= sum; i++)
	{
		printf("%d ", m % 10);
		m /= 10;
	}
	return 0;
}