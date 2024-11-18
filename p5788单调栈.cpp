#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>

using namespace std;

int n = 0;
int a[3000005] = { 0 };
int r[3000005] = { 0 };
stack<int> s;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
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
		if (s.empty())
		{
			r[i] = 0;
		}
		else
		{
			r[i] = s.top();
		}
		s.push(i);
	}
	for (int i = 1;i <= n; i++)
	{
		cout << r[i] << " ";
	}
	return 0;
}
