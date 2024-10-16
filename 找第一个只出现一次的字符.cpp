#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000000];
    scanf("%s", str);
    int len = strlen(str);
    int found = 0;
    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%c\n", str[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("no\n");
    }
    return 0;
}