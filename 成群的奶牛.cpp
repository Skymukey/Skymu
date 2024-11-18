#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int n, k = 0;

int f(int n,int k);


int main()
{
	cin >> n >> k;
	cout << f(n, k);
	return 0;
}

int f(int n, int k)
{
	if ((n - k) % 2 != 0||n - k <=0)
		return 1;
	else
		return f((n - k) / 2, k) + f((n - k) / 2 + k, k);
}