#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<queue>

queue<int> q;
int n = 0;
int m = 0;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	while (!q.empty())
	{
		
		for (int i = 0; i < m - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}