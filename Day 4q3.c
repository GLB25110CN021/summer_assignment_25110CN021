#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;
    while (temp != 0) { temp /= 10; digits++; }
    temp = num;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return (sum == num);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n)) printf("%d is an Armstrong number.", n);
    else printf("%d is not an Armstrong number.", n);
    return 0;
}