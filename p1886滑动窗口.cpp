#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<deque>
int n,k = 0;
int a[1000005] = { 0 };
deque<int> d;
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= k; i++)
	{
		while (!d.empty() && a[i] <= a[d.back()])
			d.pop_back();
		d.push_back(i);
	}
	cout << a[d.front()] << " ";
	for (int i = k + 1; i <= n; i++)
	{
		while (!d.empty() && a[i] <= a[d.back()])
			d.pop_back();
		d.push_back(i);
		if (d.front() <= i - k)
			d.pop_front();
		cout << a[d.front()] << " ";
	}
	cout << endl;
	d.clear();
	for (int i = 1;i <= k; i++)
	{
		while (!d.empty() && a[i] >= a[d.back()])
			d.pop_back();
		d.push_back(i);
	}
	cout<<a[d.front()]<<" ";
	for (int i = k+1; i <= n; i++)
	{
		while (!d.empty() && a[i] >= a[d.back()])
			d.pop_back();
		d.push_back(i);
		if (d.front() <=i - k)
			d.pop_front();
		cout<<a[d.front()]<<" ";
	}


	return 0;
}