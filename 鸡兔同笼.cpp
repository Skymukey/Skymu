#include <stdio.h>

int main() {
    int totalHeads, totalFeet;
    scanf("%d %d", &totalHeads, &totalFeet);
    int rabbits = (totalFeet - 2 * totalHeads) / 2;
    int chickens = totalHeads - rabbits;
    printf("%d %d\n", chickens, rabbits);
    return 0;
}