#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stack>

stack<char> st;


int main()
{
	char x;
	while ((x = getchar()) != '@')
	{
		
		if (x == '(')
		{
			st.push(x);
		}
		else if (x == ')')
		{
			if (st.empty())
			{
				cout << "NO";
				return 0;
			}

			st.pop();
		}
	}
	if (st.empty())
	{
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}