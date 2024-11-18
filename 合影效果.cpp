#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<set>
#include<string>
#include<set>
#include<iomanip>

int n = 0;
set<double> m;
set<double> fe;



int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name;
		double x = 0;
		cin >> name >> x;
		if (name == "male")
		{
			m.insert(x);
		}
		else
		{
			fe.insert(x);
		}
	}
	for (set<double>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout <<fixed<<setprecision(2)<< *it << " ";
	}
	for (set<double>::reverse_iterator it = fe.rbegin(); it != fe.rend(); it++)
	{
		cout <<fixed<<setprecision(2)<< *it << " ";
	}
	return 0;
}