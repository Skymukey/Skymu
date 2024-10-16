#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char s[256];
int count = 0;

int main()
{
	scanf("%[^\n]", s);
	int len = strlen(s);
	for (int i = 0; i < len;i++)
	{
		if ((int)s[i] >= 48 && (int)s[i] <= 57)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}