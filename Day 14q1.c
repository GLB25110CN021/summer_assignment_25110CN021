#include <stdio.h>

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15}, n = 6, key = 70, found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Element not found.\n");
    return 0;
}