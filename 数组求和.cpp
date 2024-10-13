#include<stdio.h>
int n, k = 0;
int s[100000] = { 0 };
int a = 0, b = 0;

int main()
{
	scanf_s("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);
	}
	for (int i = 0; i < k; i++)
	{
		int sum = 0;
		scanf_s("%d %d", &a, &b);
		for (a; a <= b; a++)
		{
			sum += s[a - 1];
		}
		printf("%d\n", sum);
	}
	return 0;
}