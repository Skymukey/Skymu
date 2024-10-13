#include<stdio.h>
int s[100] = { 0 };
int n = 0;
int x = 0;
int sum = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);
		if (s[i] > x)
		{
			sum += x;
			x = s[i];
			

		}
		else if (s[i] == x)
		{
			continue;
		}
		else
		{
			sum += s[i];
		}
	}
	printf("%d", sum);
	return 0;
}