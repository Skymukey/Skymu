#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int n, m = 0;
int s[1000001] = { 0 };
int x = 0;

int search(int x);
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		cout << search(x) << " ";
	}
	return 0;
}

int search(int x)
{
	int l = 0;
	int r =n;
	int mid = 0;
	while (l < r)
	{
		mid = l +(r - l) / 2;
	
		if (s[mid] >= x)
		{
			r = mid;
		}
		else if (s[mid] <=  x)
		{
			l = mid + 1;
		}
	}
	if (s[l] == x)
	{

		return l + 1;
	}
	return -1;
}