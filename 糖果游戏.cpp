#include<stdio.h>
int s[5] = { 0 };

int main()
{
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &s[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			s[4] += s[i] / 3;
			s[1] += s[i] / 3;
			s[i] = s[i] / 3;
		}
		else if (i == 4)
		{
			s[0] += s[i] / 3;
			s[3] += s[i] / 3;
			s[i] = s[i] / 3;
		}
		else
		{
			s[i +1] += s[i] / 3;
			s[i -1] += s[i] / 3;
			s[i] = s[i] / 3;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", s[i]);
	}
	return 0;
}
