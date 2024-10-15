#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n ,dist = 0;
int s[100000] = { 0 };
int start, end = 0;
int max = 0;
int k = 0;
int t = 0;
int x = 0;


int main()
{
	scanf("%d %d", &n, &dist);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	while (t != 1)
	{
		t = 1;
		for (int i = 0; i <= n - 1; i++)
		{
			if (s[i] > s[i + 1])
			{
				k = s[i];
				s[i] = s[i + 1];
				s[i + 1] = k;
				t = 0;
			}
		}
	}
	start = 0;
	end = n - 1;
	while(x == 0)
	{

		for (int i = start; i <= end; i++)
		{
			if (s[i] - s[start] > dist)
			{
				max += i -1- start - 1;
				start = i-1;
				continue;
			}
			else if (i == end)
			{
				if (i - start > max)
				{
					max += i - start - 1;
				}
				x = 1;
				break;
			}
	
		}
	}
	printf("%d", max);
	return 0;
}