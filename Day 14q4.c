#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3}, n = 9;

    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // Print each duplicate value only once for its first occurrence
            }
        }
    }
    return 0;
}