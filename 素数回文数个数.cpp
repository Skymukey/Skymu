#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

// 判断一个数是否为回文数
int isPalindrome(int num) {
    int original = num;
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return original == reverse;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 11; i <= n; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}