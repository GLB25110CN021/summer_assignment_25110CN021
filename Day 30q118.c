#include <stdio.h>

int main() {
    char books[3][50];
    int bookIDs[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter book title: ");
        scanf("%s", books[i]);
        printf("Enter Book ID: ");
        scanf("%d", &bookIDs[i]);
    }

    printf("\n--- Library Catalog ---\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d | Title: %s\n", bookIDs[i], books[i]);
    }
    return 0;
}