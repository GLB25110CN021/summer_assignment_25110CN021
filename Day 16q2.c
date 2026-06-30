#include <stdio.h>

void maxFrequency(int arr[], int n) {
    int max_count = 0, res = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > max_count) {
            max_count = count;
            res = arr[i];
        }
    }
    printf("Element with max frequency: %d", res);
}

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxFrequency(arr, n);
    return 0;
}