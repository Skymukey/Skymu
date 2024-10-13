#include<stdio.h>
char a;
int main()
{
	scanf_s("%c", &a);
	if (a % 2 == 0)
	{
		printf("NO");

	}
	else
	{
		printf("YES");
	}
	return 0;
}