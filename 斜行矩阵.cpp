#include<stdio.h>
int n = 0;
int s[19][19] = { 0 };
int a = 1;
int x = 0, y = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (x = 0; x <= i; x++)
		{
			y = i - x;
			s[x][y] = a;
			a++;
		}
	}


	
	for (int i = 0; i <  n - 1; i++)
	{
		 for (x = i + 1; x <= n - 1; x++)
		 { 
				y = n  + i- x;
				s[x][y] = a;
				a++;
		 }
	}
	
	for (int j = 0; j < n; j++)
	{
		for (int h = n - 1 ; h >= 0; h--)
		{
			printf("%4d", s[j][h]);
		}
		printf("\n");
	}

	return 0;
}
