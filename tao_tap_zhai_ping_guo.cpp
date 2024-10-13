#include<stdio.h>
int s[10] = { 0 };
int n ,m= 0;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &s[i]);

	}
	scanf_s("%d", &n);
	for (int i = 0; i < 10; i++)
	{
		if (n + 30 >= s[i])
		{
			m += 1;
		}
	}
	printf("%d", m);
}