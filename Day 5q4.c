#include <stdio.h>

int main() {
    long int num, maxPrime = -1;
    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    if (num > 2) maxPrime = num;

    printf("Largest Prime Factor is: %ld\n", maxPrime);

    return 0;
}
