#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int grade = 0;

int main()
{
	scanf("%d", &grade);
	grade = grade/10;
	/*if (grade >= 9)
	{
		printf("A\n");
	}
	else if (grade >= 8)
	{
		printf("B\n");
	}
	else if (grade >= 7)
	{
		printf("C\n");
	}
	else if (grade >= 6)
	{
		printf("D\n");
	}
	else 
	{
		printf("E\n");
	}*/
	switch (grade)
	{
		case 10:
		case 9:printf("A\n");
		case 8:printf("B\n");
		case 7:printf("C\n");
		case 6:printf("D\n");
		default:printf("E\n");
	}
	return; 0;
}