#include <stdio.h>

int main() {
    char empNames[3][50];
    float salaries[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter Employee Name: ");
        scanf("%s", empNames[i]);
        printf("Enter Salary: ");
        scanf("%f", &salaries[i]);
    }

    printf("\n--- Employee List ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %-10s | Salary: $%.2f\n", empNames[i], salaries[i]);
    }
    return 0;
}