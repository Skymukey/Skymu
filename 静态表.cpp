#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
long long a[100020] = { 0 };
int n, q = 0;


int main()
{
	cin >> n >> q;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	for (int i = 0; i < q; i++)
	{
		int l = 0, r = 0;
		cin >> l >> r;
		cout << a[r] - a[l - 1] << endl;
	}
	return 0;
}