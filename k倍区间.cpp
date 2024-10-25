#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int n, k = 0;
long long a[100020] = {0};

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if ((a[j] - a[i - 1]) % k == 0)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}