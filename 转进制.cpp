#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ݹ麯�����ڽ�ʮ������ת��Ϊ���������
void convert(int num, int base) {
    if (num == 0) {
        return;
    }
    int rem = num % base;
    convert(num / base, base);
    if (rem < 10) {
        printf("%d", rem);
    }
    else {
        printf("%c", rem - 10 + 'A');
    }
}

int main() {
    int decimal, base;
    scanf("%d %d", &decimal, &base);
    convert(decimal, base);
    printf("\n");
    return 0;
}