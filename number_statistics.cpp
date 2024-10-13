#include<stdio.h>
int s[10] = {0 };
int n,m = 0;
int count = 0;
int main()
{
	scanf_s("%d %d", &n, &m);
	for (n; n <= m; n++)
	{
		count = 0;
		int t = n;
		while (t > 9)
		{
			t /= 10;
			count++;
		}
		int k = n;
		for (int i = 0; i <= count; i++)
		{
			s[k % 10 ]++;
			k /= 10;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}