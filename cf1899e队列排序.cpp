#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int t = 0;
int a[200005] = { 0 };
int n = 0;

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int min = 1000000005;
		int x = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> a[j];
			if (a[j] < min)
			{
				x = j;
				min = a[j];
			}
		}
		int f = true;
		for (int j = x; j < n-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				cout << -1<<endl;
				f = false;
				break;
			}
		}
		if (f)
		{
			cout << x<<endl;
		}
	}
	return 0;
}