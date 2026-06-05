#include <stdio.h>

int main() {
    int n1, n2, a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    a = n1; b = n2;
    // Finding GCD first
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (n1 * n2) / gcd;

    printf("LCM of %d and %d is: %d", n1, n2, lcm);
    return 0;
}
