#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("Number of set bits: %d", countSetBits(i));
    return 0;
}