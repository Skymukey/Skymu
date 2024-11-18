#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int l, m = 0;
int a[10020] = { 0 };

int main()
{
	cin >> l >> m;
	for (int i = 0; i < m; i++)
	{
		int x = 0, y = 0;
		cin >> x >> y;
		for (int j = x; j <= y; j++)
		{
			a[j] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i <= l; i++)
	{
		if (!a[i])
			cnt++;

	}
	cout << cnt;
	return 0;
}