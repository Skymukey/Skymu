#include<stdio.h>
int n, m = 0;
int s[5001] = { 0 };
int y = 1;
int a = 1;
int main()
{
	scanf_s("%d %d", &n,&m);
	for (int i = 1; i <= m; i++)
	{
		int x = 1;
		while (i * x <= n)
		{
			if (s[i * x] == 0)
			{
				s[i * x] = 1;
				x++;
			}
			else if (s[i * x] == 1)
			{
				s[i * x] = 0;
				x++;
			}
		}
	}
	while ( y <= n)
	{
		if (s[y] == 1)
		{
			if (a)
			{
				a = 0;
			}
			else
			{
				printf(",");
			}
			printf("%d",y);
		}
		y++;
	}

	return 0;
	
}