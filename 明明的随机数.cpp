#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<set>

int n = 0;
set<int> s;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
	set<int>::iterator it = s.begin();
	for (it; it != s.end(); it++)
	{
		cout << *it << " ";
	}
	return 0;
}