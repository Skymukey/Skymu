#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
long long n, p = 0;
long long z[105] = { 0 };
long long s[105][2] = { 0 };
long long m = 1000000000000;

bool check(long long mid);

int main()
{
	cin >> n >> p;
	
	for (int i = 0; i < n; i++)
	{
		cin >> z[i] >> s[i][0] >> s[i][1];

	}
	long long l = 1;
	long long r = m;
	while (l < r)
	{
		long long mid = (r + l) / 2;
		if (check(mid))
		{
			r = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	cout << l << endl;
	return 0;
}
bool check(long long mid)
{
	long long cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (mid <= z[i])
		{
			cnt += s[i][0] * mid;
		}
		else
		{
			cnt += s[i][0] * z[i] + s[i][1] * (mid - z[i]);
		}
	}
	if (cnt >= p)
		return true;
	else
		return false;
}