#include<stdio.h>
int s[10000] = { 0 };
int n = 0;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}

	for (int i = 1; i < n;i++)
	{
		printf("%d ", s[i]);
	}
	printf("%d", s[0]);
	return 0;
}