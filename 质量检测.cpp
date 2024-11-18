#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<deque>
using namespace std;

int n, m = 0;
int a[1000005] = { 0 };
deque<int> d;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++)
	{
		while (!d.empty() && a[i] <= a[d.back()])
		{
			d.pop_back();
		}
		d.push_back(i);
	}
	cout << a[d.front()] << endl;
	for (int i = m + 1; i <= n; i++)
	{
		while (!d.empty() && a[i] <= a[d.back()])
		{
			d.pop_back();
		}
		d.push_back(i);
		if (d.front() <= i - m)
			d.pop_front();
		cout << a[d.front()] << endl;
	}
	return 0;
}