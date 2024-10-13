#include<stdio.h>
int a = 0;
int main()
{
	scanf_s("%d", &a);
	if (a > 0)
	{
		printf("positive");
	}
	else if (a == 0)
	{
		printf("zero");
	}
	else if (a < 0)
	{
		printf("negative");
	}



	return 0;
}