#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int result = 0;
int x, y = 0;
int m = 0;

int main()
{
	for (int i = 1; i <= 7; i++)
	{
		cin >> x >> y;
		if (x + y > 8)
		{
			if (result == 0)
			{
				result = i;
				m = (x + y);
			}
			else
			{
				if (x + y > m)
				{
					result = i;
					m = x + y;
				}
			}
		}
	}
	cout << result << endl;
	return 0;
}