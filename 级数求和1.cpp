#include<stdio.h>
int y,  n = 0;
double s = 0;
int main()
{
	scanf_s("%d", &y);
	while (s <= y)
	{
		n++;
		s = s + 1.0 / n;
		
	}
	printf("%d", n);
	return 0;
}