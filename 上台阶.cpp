#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int n = 0;
unsigned long long x = 0;
unsigned long long a[1000] = { 0 };

unsigned long long f(unsigned long long x);

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cout << f(x) << endl;
	}
	return 0;
}

unsigned long long f(unsigned long long x)
{
	if (a[x] != 0)
		return a[x];
	else if (x == 1)
	{
		a[x] = 1;
		return 1;
	}
	else if (x == 2)
	{
		a[x] = 2;
		return 2;
	}
	else if (x == 3)
	{
		a[x] = 4;
		return 4;
	}
	else
	{
		a[x] = f(x - 1) + f(x - 2) + f(x - 3);
		return f(x - 1) + f(x - 2) + f(x - 3);
	}
}