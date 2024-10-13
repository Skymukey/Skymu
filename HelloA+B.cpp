#include<stdio.h>
int s[4] = { 0 };

int main()
{
	while (1)
	{
		scanf_s("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
		if (s[0] == 0 && s[1] == 0 && s[2] == 0 && s[3] == 0)
		{
			break;
		}
		printf("%d\n", s[0] + s[1] - s[2] * s[3]);
	}
	return 0;
}