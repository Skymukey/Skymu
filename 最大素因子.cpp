#include<stdio.h>
int n = 0;
int s[5000] = { 0 };
int m[5000] = { 0 };
int x = 0;

int main()
{
	scanf_s("%d", &n);
	for ( int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);

	}
	for (  int i = 0; i < n; i++)
	{
		int t = s[i];
		for (int k = 2; k <= t; k++)
		{
			while (t % k == 0)
			{
				t /= k;
			}
			m[i] = k;
			if (k >= x)
			{
				x = k;
			}
		}
		
	}
	for (int i = 0; i < n; i++)
	{
		if (m[i] == x)
		{
			printf("%d", s[i]);
			return 0;
		}
	}

	return 0;
}