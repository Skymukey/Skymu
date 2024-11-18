#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int a[1000000] = { 0 };
int b[1000000] = { 0 };
int n = 0;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;
	int m = n;
	int i = 0;
	while (cnt < n)
	{
		
		cout << a[i];
		i++;
		a[m] = a[i];
		m++;
		i++;
		cnt++;
	}
	return 0;
}