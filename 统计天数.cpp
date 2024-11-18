#include<stdio.h>
int s[10000001] = { 0 };
int n = 0;
int a=0, b = 0;
int x = 0 ,y = 1;
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s[i]);
	}
	
	for (int i = 0; i < n - 1; i++)
	{
		
		if (s[i +1] > s[i])
		{
			y++;
			if (y > x)
			{
				x = y;
			}
		}
		else
		{
			y = 1;
		}

	}
	printf("%d", x);
	return 0;
}
