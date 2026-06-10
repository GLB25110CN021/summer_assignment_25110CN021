#include <stdio.h>

int main() {
    int size = 5;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Print star for first and last rows/columns
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
