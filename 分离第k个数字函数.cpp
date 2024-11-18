#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int n, k = 0;
int digit(int n, int k)
{
	int x = 0;
	for (int i = 0; i < k; i++)
	{
		x = n % 10;
		n /= 10;
	}
	return x;
}

int main()
{
	cin >> n >> k;
	cout << digit(n, k);
	return 0;
}