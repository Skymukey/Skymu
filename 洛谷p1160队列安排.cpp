#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<list>


int n ,m = 0;
list<int>::iterator a[100020];
list<int>l;
int b[100020] = { 0 };

int main()
{
	
	cin >> n;
	a[1] = l.insert(l.begin(), 1);
	int k,p = 0;
	for (int i = 2; i <= n; i++)
	{
		cin >> k >> p;
		
		if (p)
		{
			list<int>::iterator it = a[k];
			a[i] = l.insert(++it, i);
		}
		else
		{	
			a[i] = l.insert(a[k], i);
		
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x = 0;
		cin >> x;
		if (b[x] != 1)
		{
			l.erase(a[x]);
			b[x] = 1;
		}
	}
	for (list<int>::iterator pr = l.begin(); pr != l.end(); pr++)
	{
		cout << *pr << " ";
	}
	return 0;
}