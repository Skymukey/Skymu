#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<string>

class compare
{
public:
	bool operator()(int a, int b)const
	{
		return a > b;
	}
};
int n = 0;
multimap<int, string,compare> mp1;
vector<string> v;



int main()
{
	cin >> n;
	int y = 0;
	string x;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (y >= 60)
		{
			mp1.insert(pair<int,string>(y, x));
		}
		else
			v.push_back(x);
	}
	multimap<int, string,compare>::iterator it = mp1.begin();
	for (it; it != mp1.end(); it++)
	{
		cout << it->second <<endl;
	}
	vector<string>::iterator p = v.begin();
	for (p; p !=v.end(); p++)
	{
		cout << *p << endl;
	}
	return 0;
}