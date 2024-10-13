#include<stdio.h>

int n, k = 0;
int s[20] = { 0 };
int t = 0;
int main()
{
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &s[i]);
    }
    while (t != 1)
    {
        t = 1;
        for (int i = 0; i <= n - 1; i++)
        {
            if (s[i] < s[i + 1])
            {
                k = s[i];
                s[i] = s[i + 1];
                s[i + 1] = k;
                t = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", s[i]);
    }
    return 0;
}