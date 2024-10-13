#include<stdio.h>
#include<math.h>
int n, m = 0;
int sum = 0;
int x = 1;
int main()
{
	scanf_s("%d", &n);
	while(sum < n)
	{
		x += 1;
		m = 0;
		for (int k = 2; k <= sqrt(x); k++)
		{
			if (x % k == 0)
			{
				m = 1;
				break;
			}
		}
		if (m == 0)
		{
			sum += 1;
		}
	
	}
	printf("%d",x );

	return 0;
}