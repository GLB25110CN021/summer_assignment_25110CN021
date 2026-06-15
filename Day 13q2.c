#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", sum / n);
    return 0;
}