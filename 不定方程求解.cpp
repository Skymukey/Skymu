#include<stdio.h>
int a, b, c = 0;
int x, y = 0;
int count = 0;

int main()
{
	scanf_s("%d %d %d", &a, &b,&c);
	while(a*x <= c)
	{
		y = 0;
		while (a * x + b * y <= c)
		{
			if (a * x + b * y == c)
			{
				count++;
				break;
			}
			y++;
		}
		x++;
	}
	printf("%d", count);
	return 0;
}
