#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int n = 0;
string s;
int ret = 0;

int main()
{
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')
			ret++;
	}
	cout << ret;
	return 0;
}