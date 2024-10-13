#include<stdio.h>
#include<math.h>
int n ,m,sum= 0;
int s = 0;
int main()
{
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		int k = 0;
		if (i % 7 == 0)
		{
			continue;
		}
		int t = i;
		sum = 0;
		while (t > 9)
		{
			t /= 10;
			sum += 1;

		}
		m = i;
		for (int h = 0; h <= sum; h++)
		{
			if (m % 10 == 7)
			{
				k = 1;
				break;
			}
			m /= 10;
		}
		if (k == 0)
		{
			s += pow(i, 2);
		}
	}
	printf("%d", s);
	return 0;
}