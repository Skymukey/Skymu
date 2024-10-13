#include<stdio.h>
double q1, q2, p1, p2, s = 0;
int n, temp = 0;

int main()
{
	p1 = 1.0;
	q1 = 2.0;
	scanf_s("%d", &n);
	for (int i = 0; i < n ; i++)
	{
		s += q1 / p1;
		q2 = q1 + p1;
		p2 = q1;
		q1 = q2;
		p1 = p2;
	}
	printf("%.4lf", s);
	return 0;
}