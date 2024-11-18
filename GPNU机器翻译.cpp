#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int memory[100000000];
int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int word;

    int count = 0;

    for (int i = 0; i < m; i++) {
        memory[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &word);
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (memory[j] == word) {
                found = 1;
                break;
            }
        }
        if (!found) {
            count++;
            for (int j = 0; j < m - 1; j++) {
                memory[j] = memory[j + 1];
            }
            memory[m - 1] = word;
        }
    }

    printf("%d\n", count);

    return 0;
}