#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n = 0;
int a[100020] = { 0 };
int b[100020] = { 0 };

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	b[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[i+1] < b[i + 1])
		{
			b[i] = a[i];
		}
		else
			b[i] = b[i + 1];
	}
	for (int i = 0; i < n - 1; i++)
	{
		int result = a[i] - b[i];
		printf("%d ", result);
	}
	printf("no");
	return 0;
}