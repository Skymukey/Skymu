#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int x, t, n = 0;
long long cnt = 0;

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> x;
		cnt = x * n - (n / 2) * (x / 2);
		cout << cnt << endl;
	}
	return 0;
}