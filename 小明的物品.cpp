#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
using namespace std;
int a, b ,c = 0;

int main()
{
	scanf("%d %d %d", &a, &b, &c);
	if (a != b && b != c && a != c)
	{
		printf("3");
	}
	else if (a == b && a != c || a == c && a != b || c == b && a != c)
		printf("2");
	else
		printf("1");
	return 0;
}