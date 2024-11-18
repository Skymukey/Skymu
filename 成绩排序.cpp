#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>

struct student
{
	int number;
	string name;
	double grade;
};
struct student s[100];
int n = 0;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].number >> s[i].name >> s[i].grade;
	}
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if (s[i].grade > s[j].grade)
			{
				student temp;
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i].number<<" " << s[i].name<<" " << fixed << setprecision(1) << s[i].grade << " " << endl;
	}
	return 0;
}