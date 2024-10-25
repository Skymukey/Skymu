#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int m, n = 0;
int s[100005] = { 0 };
int x = 0;

bool check(int mid);
int main()
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> s[i];
	}
	sort(s, s + m);
	long long cnt = 0;
	for (int i = 0; i < n; i++)
	{

		cin >> x;
		int l = 0;
		int r = m;
		while (l < r)
		{
			int mid = (l + r) / 2;
			if (check(mid))
			{
				l = mid + 1;
			}
			else
			{
				r = mid;
			}
		}
		if (x <= s[0])//这里需要特判断一下，不然只能得70分
		{
			cnt += s[0] - x;
		}
		else if (fabs(s[l - 1] - x) > fabs(s[l] - x))
		{
			cnt += fabs(s[l] - x);
		}
		else
		{
			cnt += fabs(s[l - 1] - x);
		}
	}

	cout << cnt << endl;
	return 0;
}

bool check(int mid)
{

	if (s[mid ] <= x)
		return true;
	else
		return false;
}