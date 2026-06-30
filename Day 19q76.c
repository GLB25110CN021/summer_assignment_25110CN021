#include <stdio.h>

int main() {
    int size = 3, sum = 0;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Adds elements where row index == column index
    }

    printf("Sum of the main diagonal: %d\n", sum);
    return 0;
}
