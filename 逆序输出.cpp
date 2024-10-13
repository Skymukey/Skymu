#include<stdio.h>
int n = 0;
int x = 0;
int main()
{
	scanf_s("%d", &n);
	int s[100]{};
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		s[i] = x;
	}
	for (int k = n - 1; k >= 0; k--)
	{
		printf("%d ", s[k]);
	}
	return 0;
}
