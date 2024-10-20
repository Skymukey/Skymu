#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s[1000000][2] = { 0 };
int t[1000000][2] = { 0 };
int p = 0;
int a, b, g,k = 0;
int x, y = 0;
int main()
{
	scanf("%d", &p);
	for (int i = 0; i < p; i++)
	{
		scanf("%d %d %d %d", &a, &b, &g, &k);
		s[i][0] = a;
		s[i][1] = b;
		t[i][0] = a + g;
		t[i][1] = b + k;
	}
	scanf("%d %d", &x, &y);
	int count = 0;
	for (int i = 0; i < p; i++)
	{
		if (x >= s[i][0] && x <= t[i][0] && y >= s[i][1] && y <= t[i][1])
		{
			count = i + 1;
		}
	}
	if (count != 0)
	{
		printf("%d", count);
	}
	else
		printf("-1");
	return 0;
}