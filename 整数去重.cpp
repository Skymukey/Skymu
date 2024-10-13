#include<stdio.h>
int n = 0;
int s[20000] = { 0 };
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 0)
		{
			continue;
		}
		for (int k = i + 1; k < n; k++)
		{
			if (s[k] == s[i])
			{
				s[k] = 0;
			}
		}
		printf("%d ", s[i]);
		
	}
	return 0;
}