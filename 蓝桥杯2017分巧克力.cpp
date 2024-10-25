#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int k, n = 0;
int h[100005] = { 0 };
int w[100005] = { 0 };
int m = 0;

bool check(int mid);
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> h[i] >> w[i];
		if (h[i] < w[i])
		{
			int temp = h[i];
			h[i] = w[i];
			w[i] = temp;
		}
		if (h[i] > m)
		{
			m = h[i];
		}
	}
	int l = 1;
	int r = m;
	while (l < r)
	{
		int mid = (l + r + 1) / 2;
		if (check(mid))
		{
			l = mid;
		}
		else
			r = mid - 1;
	}
	cout << l << endl;
	return 0;
}

bool check(int mid)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int p = w[i] / mid;
		cnt += p * (h[i] / mid);
	}
	if (cnt >= k)
	{
		return true;
	}
	else
		return false;
}