#include<stdio.h>
int n = 0;
int s[100] = { 0 };
int count = 0, sum = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);
		sum += s[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] <= sum / n)
		count++;
	}
	printf("%d", count);
	return 0;
}
