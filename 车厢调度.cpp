#include<stdio.h>
int n = 0;
int a[1001], b[1001];
int c = 1;
int t = 0;
int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int k = 1; k <= n; k++)
	{
		while (c <= a[k])
		{
			b[t] = c;
			c++;
			t++;
			
		}
		if (b[t-1] == a[k])
		{
			t--;
		}
		else
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");



	return 0;
}