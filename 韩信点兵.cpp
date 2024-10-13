#include<stdio.h>
int a, b, c = 0;
int i = 0;
int main()
{
	scanf("%d %d %d", &a, &b, &c);
	for (i = 10; i <= 100; i++)
	{
		if (i % 3 == a && i % 5 == b && i % 7 == c)
		{
			printf("%d", i);
			break;
		}

	}
	if (i == 101)
	{
		printf("No answer");
	}
	return 0;
}