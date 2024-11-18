#define _CRT_SECURE_NO_WARNINGS
#define ll long long
#include<iostream>
#include<algorithm>
using namespace std;

ll t, n, k = 0;
ll a[200005] = { 0 };
int main()
{
	cin >> t;
	for (ll i = 0; i < t; i++)
	{
		
		cin >> n >> k;
		for (ll j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		sort(a, a + n);
		ll ret = 0;
		ll q=0,p=0,r = 0;
		for (ll j = 0; j < n; j++)
		{
			if ((a[j] - q) * (n - p) >= k - r && a[j] != 0)
			{
				ret += k - r;
				break;
			}
			else
			{
				ret += (a[j] - q) * (n - p) + 1;
				r += (a[j] - q) * (n - p);
				p++;
				q += (a[j]-q);
			}
		}
		cout << ret << endl;
	}
	return 0;
}