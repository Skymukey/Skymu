#include<stdio.h>
double y, s = 0;
int n =0;

int main()
{
	scanf_s("%lf", &y);
	while (s <= y)
	{
		n++;
		s += 1.0 / n;
		
	}
	printf("%d", n);
	return 0;
}