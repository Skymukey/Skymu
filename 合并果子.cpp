#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<queue>

int n = 0;
priority_queue<int, vector<int>, greater<int>> q;
int ans = 0;

int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		cin >> a;
		q.push(a);
	}
	while (q.size() != 1)
	{
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		ans += a + b;
		q.push(a + b);
	}
	cout << ans;
	return 0;
}