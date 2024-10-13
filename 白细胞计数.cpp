#include<stdio.h>
#include<math.h>
int n = 0;
double s[301] = { 0 };
double x = 0;
double sum = 0;
double count = 0;

void bubble( double *s);
double max(double *s);
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lf", &s[i]);
	}
	bubble(s);
	for (int k = 1; k < n - 1; k++)
	{
		sum += s[k];
	}
	count = sum / (n - 2);
	printf("%.2lf %.2lf", count, max(s));
	return 0;
}


void  bubble(double *s)
{
	int t = 0;
	while (t != 1)
	{
		t = 1;
		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] < s[i + 1])
			{
				x = s[i];
				s[i] = s[i + 1];
				s[i + 1] = x;
				t = 0;
			}
		}
	}
	
}

double max(double *s)
{
	double x = 0;
	if (fabs(s[1] - count) >= fabs(s[n - 2] - count))
		x = fabs(s[1] - count);
	else
		x = fabs(s[n - 2] - count);
	return x;

}
