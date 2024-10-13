#include<stdio.h>
int n = 0, m = 0;
char a = 'b';
int k, i, x, y = 0;
int sum = 0;
char s[102][102] = { '0' };
int main()
{
	scanf_s("%d %d", &n, &m);
	getchar();
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf_s("%c", &s[i][j]);
		}
		getchar();
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (s[i][j] == '*')
				printf("*");
			else
			{
				sum = 0;
				for (int x = i - 1; x <= i + 1; x++)
				{
					for (int y = j - 1; y <= j + 1; y++)
					{
						if (s[x][y] == '*')
							sum += 1;
					}
				}
				printf("%d", sum);

			}

		}
		printf("\n");
	}

	return 0;
}
