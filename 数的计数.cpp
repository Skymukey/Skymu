#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int n = 0;
int cnt = 0;
int s[1020] = { 0,1 };


int f(int n);

int main()
{
	cin >> n;
	cout << f(n);
	return 0;
}

int f(int n)
{
	if (s[n] != 0)
		return s[n];
	else if (n != 1)
	{
		int p = 1;
		for (int i = 1; i <= n / 2; i++)
		{

			p += f(i);
		}
		s[n] = p;
		return p;
	}


}