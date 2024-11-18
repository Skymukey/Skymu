#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

int n = 0;
string x;
struct student
{
	string name;
	string gender;
	int year;
	int month;
};
struct student s[100];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].name >> s[i].gender >> s[i].year >> s[i].month;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i].year > s[j].year)
			{
				student temp;
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
			else if (s[i].year == s[j].year)
			{
				if (s[i].month > s[j].month)
				{
					student temp;
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i].name << " " << s[i].gender << " " << s[i].year << " " << s[i].month << endl;
	}
	return 0;
}