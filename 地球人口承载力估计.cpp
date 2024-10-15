#include <stdio.h>
double z = 0;
long long x, a, y, b = 0;
int main() {

    scanf_s("%lld %lld %lld %lld", &x, &a, &y, &b);
    z = (1.0 * b * y - 1.0 * a * x) / (1.0 * b - a);
    printf("%.2lf", z);
    return 0;
}