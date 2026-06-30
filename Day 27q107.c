#include <stdio.h>

int main() {
    int m1, m2, m3;
    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    float total = m1 + m2 + m3;
    float per = total / 3;
    printf("Total: %.2f\nPercentage: %.2f%%\nGrade: %s\n", total, per, (per >= 40 ? "Pass" : "Fail"));
    return 0;
}