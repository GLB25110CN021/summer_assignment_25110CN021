#include <stdio.h>

int main() {
    int arr[100], n, i, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("\n1. Display\n2. Find Sum\n3. Find Max\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        for(i = 0; i < n; i++) printf("%d ", arr[i]);
    } else if(choice == 2) {
        int sum = 0;
        for(i = 0; i < n; i++) sum += arr[i];
        printf("Sum: %d", sum);
    } else if(choice == 3) {
        int max = arr[0];
        for(i = 1; i < n; i++) if(arr[i] > max) max = arr[i];
        printf("Max: %d", max);
    }
    return 0;
}