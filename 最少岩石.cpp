#include<iostream>
using namespace std;

int l,n,m = 0;
int a[50020] = {0};

bool check(int mid);
int main()
{
	cin>>l>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[0] = 0;
	a[n+1] = l;
	int left = 0;
	int right = l;
	while(left<right)
	{
		int mid = (left+right)/2;
		if (check(mid))
		{
			left = mid+1;
		}
		else
		right = mid;
	}
	cout << right;
	return 0;
}
bool check(int mid)
{
	int start = 0;
	int cnt = 0;
	for(int i = 1;i<=n+1;i++)
	{
		if(a[i] - a[start] > mid)
		{
			cnt++;
			start = i;
		}
	}
	if(cnt >n-m)
				return true;
			else
				return false;
}
