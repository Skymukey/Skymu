#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int n = 0;

bool check(int mid);

int main()
{
    cin >> n;
    int l = 1;
    int r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << r << endl;
}

bool check(int mid)
{
    int x = mid;
    int cnt = mid;
    while (x >= 3)
    {
        int temp = x / 3;
        cnt += temp;
        x = x % 3 + temp;
    }
    if (cnt < n)
        return true;
    else
        return false;
}