#include<stdio.h>
int s[18] = { 0 };
int sum = 0;
int n = 0;
int main()

{
	for (int i = 0; i < 18; i++)
	{
		scanf_s("%d", &n);
		if (n < 10)
		{
			sum += n;
		}
		if (n >= 10)
		{
			sum += 10;
		}


	}
	printf("%d", sum);

	return 0;
}