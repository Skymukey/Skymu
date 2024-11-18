#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int money[100005] = { 0 };
int n, m = 0;

bool check(int mid);

int main()
{
	int l = 0;
	int r = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> money[i];
		l = max(money[i], l);
		r += money[i];
	}
	
	while (l < r)
	{
		int mid = (l + r)/2;
		if (check(mid))
		{
			r = mid;
		}
		else
			l = mid + 1;
	}
	cout << l;
	return 0;
}

bool check(int mid)
{
	int cnt = 1;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (money[i] > mid)
			return false;
		else if (money[i] + sum > mid)
		{
			cnt++;
			sum =0;
		}
		sum += money[i];
	}
	if (cnt > m)
		return false;
	else
		return true;
}