#include<stdio.h>
int n,t = 0;
int s,sum,h = 0;
int main()
{
	scanf_s("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		t = i;
		s = 1;
		while (t > 9)
		{
			t= t / 10;
			s += 1;

		}
		int h = i;
		for (int k = 0; k < s; k++)
		{
			if (h % 10 == 1)
			{
				sum += 1;
			}
			h /= 10;
		}
	}
	printf("%d", sum);
	return 0;
}