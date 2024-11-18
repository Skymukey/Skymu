#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Person {
	char name[20];      // 候选人姓名
	int count;          // 得票数
} leader[3] = { "Li", 0, "Zhang", 0, "Sun", 0 };
int c = 0;

int main()
{
	cin >> c;
	for (int i = 0; i < c;i++)
	{
		char name[20];
		cin >> name;
		if (strcmp(name, leader[0].name) == 0)
			leader[0].count++;
		else if (strcmp(name, leader[1].name) == 0)
			leader[1].count++;
		else if (strcmp(name, leader[2].name) == 0)
			leader[2].count++;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << leader[i].name << ":" <<leader[i].count<< endl;
	}
	return 0;
}