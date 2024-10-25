#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

long long n, c = 0;
long long s[100020] = { 0 };
bool check(long long mid);
long long mid = 0;

int main()
{
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int t = 0;
    long long k = 0;
    while (t != 1)
    {
        t = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                k = s[i];
                s[i] = s[i + 1];
                s[i + 1] = k;
                t = 0;
            }
        }
    }
    long long l = 0;
    long long r = s[n - 1] - s[0];
    while (l < r)
    {
        mid = (l + r + 1) / 2;
        if (check(mid))
        {
            l = mid;
        }
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}

bool check(long long mid)
{
    int count = 0;
    int start = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] - s[start] >= mid)
        {
            start = i;
            count++;
        }
    }
    if (count + 1 >= c)
        return true;

    return false;
}