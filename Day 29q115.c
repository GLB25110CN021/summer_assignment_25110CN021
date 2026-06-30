#include <stdio.h>

void stringLength(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    printf("Length: %d\n", i);
}

void reverseString(char s[]) {
    int n = 0, i;
    while (s != '\0') n++;
    printf("Reversed: ");
    for (i = n - 1; i >= 0; i--) printf("%c", s[i]);
    printf("\n");
}

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: stringLength(str); break;
            case 2: reverseString(str); break;
            case 3: break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0;
}