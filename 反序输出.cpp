#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s[100] = { 0 };
int count = 0;
int main()
{
	while (scanf("%d ", &s[count]) != EOF)
	{
		count++;
	}
	for (int i = count - 1; i >= 0; i--)
	{
		printf("%d ",s[i]);
	}
	return 0;
}