#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<set>

set<string> s;
string str;

int main()
{
	while (cin >> str)
	{
		s.insert(str);
	}
	set<string>::iterator it = s.begin();
	for (it; it != s.end(); it++)
	{
		cout << *it << endl;
	}
	return 0;
}