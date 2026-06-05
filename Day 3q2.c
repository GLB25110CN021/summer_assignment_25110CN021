#include <stdio.h>

int main() {
    int low, high, i, j, isPrime;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers: ");
    for (i = low; i <= high; i++) {
        if (i <= 1) continue;
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d ", i);
    }
    return 0;
}