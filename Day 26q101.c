#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age >= 18) printf("Eligible to vote.");
    else printf("Not eligible. Wait %d more years.", 18 - age);
    return 0;
}