#include <stdio.h>

void findPair(int arr[], int n, int sum) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d, %d\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("Pair not found");
}

int main() {
    int arr[] = {10, 15, 3, 7};
    int sum = 17;
    findPair(arr, 4, sum);
    return 0;
}