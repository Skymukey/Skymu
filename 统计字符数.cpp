#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
string str;

int main()
{
	cin >> str;
	int s[26] = {0};
	int n = 0;
	for (int i = 0; i < str.size(); i++)
	{
		s[str[i] - 'a']++;
	}
	int max = s[0];
	int result = 0;
	for (int i = 1; i < 26; i++)
	{
		if (s[i] > max)
		{
			max = s[i];
			result = i;
		}
	}
	cout << char('a' + result) <<" "<< max;
	return 0;
}