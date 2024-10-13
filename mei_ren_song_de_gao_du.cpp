#include<stdio.h>
int n = 0;
int s[1000000] = { 0 };
int k = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);
	}
	scanf_s("%d", &k);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == k)
		{
			s[i] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] != 0)
		{
			printf("%d ", s[i]);
		}
	}
	return 0;
}