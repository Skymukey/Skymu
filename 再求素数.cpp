#include<stdio.h>
#include<math.h>
int n,m = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		m = 0;
		for (int k = 2; k <= sqrt(i); k++)
		{
			if (i % k == 0)
			{
				m = 1;
				break;
			}
		}
		if (m == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}