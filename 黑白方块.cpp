#include<stdio.h>
int n, m = 0;
char s[12][12] = {'0'};
int w[12][12] = { 0 };
int b[12][12] = { 0 };
int x,y = 0;
int count = 0;

int main()
{
	scanf_s("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%s", &s[i][1],10);
	}
	/*for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%c", s[i][j]);
		}
		printf("\n");
	}*/
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j<=m;j++)
		{
			if (s[i][j] == '0')
			{
				w[i][j] = w[i - 1][j] + w[i][j - 1] - w[i-1][j-1] + 1;
				b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
			}
			else
			{
				w[i][j] = w[i - 1][j] + w[i][j - 1] - w[i-1][j-1];
				b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i-1][j-1] + 1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			for (int k = i; k <= n; k++)
			{
				for (int h = j; h <= m; h++)
				{
					if (w[k][h] + w[i - 1][j - 1] - w[i - 1][h] - w[k][j - 1] == b[k][h] + b[i - 1][j - 1] - b[i - 1][h] - b[k][j - 1])
					{
						if ((k - i + 1) * (h - j + 1) > count)
						{
							count = (k - i + 1) * (h - j + 1);
						}
					}
				}
			}
		}
	}
	printf("%d", count);

	return 0;
}