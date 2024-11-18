#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int i = 0;
    int j;
    while (s[i] != '\0') {
        if (s[i] >= '1' && s[i] <= '9') {
            int count = s[i] - '0';
            j = i + 1;
            while (count > 0) {
                printf("%c", s[j]);
                count--;
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}