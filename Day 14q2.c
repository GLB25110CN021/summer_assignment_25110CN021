#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 2, 6}, n = 6, target = 2, count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) count++;
    }
    printf("Frequency of %d is: %d\n", target, count);
    return 0;
}