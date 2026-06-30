#include <stdio.h>

int main() {
    char names[3][50];
    int rolls[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter roll number: ");
        scanf("%d", &rolls[i]);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll No: %d\n", names[i], rolls[i]);
    }
    return 0;
}