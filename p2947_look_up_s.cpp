#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stack>

int n = 0;
int a[100005] = { 0 };
int r[100005] = { 0 };
stack<int> s;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = n; i >= 1; i--)
	{
		while (!s.empty() && a[i] >= a[s.top()])
		{
			s.pop();
		}
		if (!s.empty())
		{
			r[i] = s.top();
		}
		s.push(i);
	}
	for (int i = 1; i <= n; i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}