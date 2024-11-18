#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<queue>

priority_queue<int, vector<int>, greater<int>> q;
int main()
{
	int n, op = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> op;
		if (op == 1)
		{
			int x = 0;
			cin >> x;
			q.push(x);
		}
		else if (op == 2)
		{
			cout << q.top() << endl;
		}
		else
		{
			q.pop();
		}
	}
	return 0;
}