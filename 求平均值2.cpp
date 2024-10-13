#include<stdio.h>
int n,m = 0;
int sum = 0;
int main()
{
	while(1)
	{
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		m += 1;
		sum += n; 
	}
	printf("%.1f", 1.0 * sum / m);
	return 0;
}