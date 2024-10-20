#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x, y = 0;
int count = 0;
int s[100001] = { 0 };
int n = 2;

int main()
{
	for (int i  = 2; i < 100001; i++)
	{
		n = 2;
		if (s[i] == 0)
		{
			while (i * n < 100001)
			{
				s[i * n] = 1;
				n++;
			}
		}
	}
	scanf("%d %d", &x, &y);
	for (int i = x; i <= y; i++)
	{
		if (s[i] == 0&&i != 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}