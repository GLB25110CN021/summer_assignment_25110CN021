#include <stdio.h>

int main() {
    int rows = 2, cols = 2;
    int a[2][2] = {{10, 20}, {30, 40}}, b[2][2] = {{5, 5}, {5, 5}}, diff[2][2];

    printf("Subtraction of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}