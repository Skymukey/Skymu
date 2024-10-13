#include<stdio.h>
int a , b, c = 0;
int main()
{
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 0 || b == 0 || c == 0)
	{
		printf("no\nno\nno");
	}
	else if ((a == b) & (b == c))
	{
		printf("yes\n");
		printf("yes\n");
		printf("yes\n");
	}
	else if (a == b)
	{
		if (a + b > c)
		{
			printf("no\n");
			printf("yes\n");
			printf("yes\n");
		}
		else{
			printf("no\n");
			printf("no\n");
			printf("no\n");
		}
		}
	else if (a == c)
	{
		if (a + c > b)
		{
			printf("no\n");
			printf("yse\n"); 
			printf("yes\n");
		}
		else
		{
			printf("no\n");
			printf("no\n");
			printf("no\n");
		}

	}
	else if (b == c)
	{
		if (b + c > a)
		{
			printf("no\n");
			printf("yes\n");
			printf("yes\n");
		}
		else
		{
			printf("no\n");
			printf("no\n");
			printf("no\n");
		}
	}
	else if ((a + b > c)&(a + c > b)&(b + c > a))
	{
		printf("no\n");
		printf("no\n");
		printf("yes\n");
	}
	else {
		printf("no\n");
		printf("no\n");
		printf("no\n");
	}

	return 0;
}