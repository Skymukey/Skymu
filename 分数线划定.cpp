#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int n, m = 0;
struct person
{
	int number;
	int point;
};
struct person s[5020];
void mysort(struct person s[], int n);


int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].number >> s[i].point;
	}
	mysort(s, n);
	m = (int)(m * 1.5);
	int x = s[--m].point;
	while (s[m].point >= x)
	{
		m++;
	}
	cout << x << " " << m << endl;
	for (int i = 0; i < n; i++)
	{
		if (s[i].point <x)
			break;
		cout << s[i].number << " " << s[i].point << endl;
		
	}
	return 0;
}

void mysort(struct person s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i].point > s[j].point)
			{
				person temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
			else if (s[i].point == s[j].point)
			{
				if (s[i].number < s[j].number)
				{
					person temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}

	}
}