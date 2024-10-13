#include<stdio.h>
int n = 0;
int s[1000] = { 0 };
int count = 1, x = 1;

int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			x++;
		}
		else
		{
			if (x >= count)
			{
				count = x;
				x = 1;
			}
		}
	}
	if (count < x)
	{
		count = x;
	}
	printf("%d ", count);
	return 0;
}