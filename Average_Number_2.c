#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int number = 0;
int sum = 0;
int count = 0;

int main()
{
	printf("����������\n");
	scanf("%d", &number);
	while (number != -1)
	{
		count++;
		sum = sum + number;
		scanf("%d", &number);


	}
	printf("ƽ������%f", 1.0 * sum / count);



	return 0;
}