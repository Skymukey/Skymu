#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stack>

stack<int> st;

int main()
{
	int a = 0, b = 0;
	char c;
	cin >> a;
	a %= 10000;
	st.push(a);
	while (cin >> c >> b)
	{
		if (c == '*')
		{
			a = st.top();
			st.pop();
			st.push(a * b % 10000);
		}
		else
			st.push(b);
	}
	a = 0;
	while (!st.empty())
	{
		a += st.top();
		a %= 10000;
		st.pop();
	}
	cout << a;
	return 0;
}