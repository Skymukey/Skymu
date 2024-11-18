#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
using namespace std;
#include<algorithm>

int h[1000005] = { 0 };
int v[1000005] = { 0 };
stack<int> s1;
stack<int> s2;
int n = 0;
int r[1000005] = { 0 };

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> h[i] >> v[i];
	}
	for (int i = n; i >= 1; i--)
	{
		while (!s1.empty() && h[i] >= h[s1.top()])
			s1.pop();
		if (!s1.empty())
		{
			r[s1.top()] += v[i];
		}
		s1.push(i);
	}
	for (int i = 1; i <= n; i++)
	{
		while (!s2.empty() && h[i] >= h[s2.top()])
			s2.pop();
		if (!s2.empty())
		{
			r[s2.top()] += v[i];
		}
		s2.push(i);
	}
	sort(r, r + n+1);
	cout << r[n];
	return 0;
}