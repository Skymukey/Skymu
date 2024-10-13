#include<stdio.h>
#include<math.h>
float x, n = 0;
float sum = 0;
float mul(float);
int main()
{
	scanf_s("%f %f", &x, &n);
	for (float i = 0; i <= n; i++)
	{
		sum += pow(x,i);
	}
	printf("%.2f",sum);
	return 0;
}

