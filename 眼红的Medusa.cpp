#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int n, m = 0;
int k[100020] = { 0 };
int t[100020] = { 0 };

bool check(int mid,int i);
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> k[i];
	}
	for (int i = 0;i < m; i++)
	{
		cin >> t[i];
	}
	sort(t, t + m);
	for (int i = 0; i < n; i++)
	{
		int l = 0;
		int r = m + 1;
		while (l < r)
		{
			int mid = (l + r + 1) / 2;
			if (check(mid, i))
				l = mid;
			else
				r = mid - 1;
		}
		if (t[l] == k[i])
			cout << t[l] << " ";
	}

	return 0;
}
bool check(int mid, int i)
{
	if (mid >= m) return false;
	if (t[mid] <= k[i])
		return true;
	else
		return false;
}