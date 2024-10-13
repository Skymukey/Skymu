#include<stdio.h>
#include<math.h>
int n = 0;
int s[1000] = { 0 };
int a = 0;
int b = 0;
int main()
{
	
	scanf_s("%d", &n);
	int t = n;
	for (int i = 2; i <= t ; i++)
	{
		if (t % i == 0)
		{
			s[a] = i;
			while (t % i == 0)
			{
				t /= i;
				s[a + 1] += 1;
			}
			a += 2; 
			b++;
		}
	}
	
	printf("%d=", n);
	a = 0;
	int k = 1;
	while (s[a] != 0)
	{
		if (k == 1)
		{
			k = 0;
		}
		else
		{
			printf("*");
		}
		printf("%d", s[a]);
		if (s[a + 1] != 1)
		{
			printf("^%d", s[a + 1]);
		}
		a += 2;
	}
	return 0;
}