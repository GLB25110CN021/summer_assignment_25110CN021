#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;
    while (temp != 0) { temp /= 10; digits++; }
    temp = n;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return (sum == original);
}

int main() {
    int num = 153;
    if (isArmstrong(num)) printf("%d is an Armstrong number.\n", num);
    else printf("%d is not an Armstrong number.\n", num);
    return 0;
}