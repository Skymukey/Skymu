#include<stdio.h>
int n, m = 0;
int main()
{
	scanf_s("%d %d", &n, &m);
	int t = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int g = 0; g < t; g++)
		{
			printf(" ");
		}
		t -= 1;
		for (int k = 0; k < m; k++)
		{
	
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}