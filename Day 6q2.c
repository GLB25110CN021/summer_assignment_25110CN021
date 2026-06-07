#include <stdio.h>

int binaryToDecimal(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * (1 << i); // 1 << i is 2 raised to power i
        ++i;
    }
    return dec;
}

int main() {
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("Decimal: %d", binaryToDecimal(n));
    return 0;
}