#include <stdio.h>

void reverseNumber(int n) {
    if (n == 0) return;
    printf("%d", n % 10);
    reverseNumber(n / 10);
}

int main() {
    int num = 1234;
    printf("Reverse of %d is: ", num);
    reverseNumber(num);
    printf("\n");
    return 0;
}
