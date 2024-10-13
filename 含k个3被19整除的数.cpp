#include<stdio.h>
int m, k = 0;
int sum= 0,x = 0;
int main()
{
	scanf_s("%d %d", &m, &k);
	if (m % 19 == 0)
	{

		int t = m;
		while (t > 9)
		{
			t /= 10;
			sum += 1;

		}
		for (int i = 0; i <= sum; i++)
		{
			if (m % 10 == 3)
			{
				x += 1;
			}
			m /= 10;
		}
		if (x == k)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		

	}
	else
	{
		printf("NO");
	}
	return 0;
}