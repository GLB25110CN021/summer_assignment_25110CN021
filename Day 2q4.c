#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store original value to compare later

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is not a Palindrome.\n", original);

    return 0;
}