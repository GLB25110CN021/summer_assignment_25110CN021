#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Even elements: %d\nOdd elements: %d", even, odd);
    return 0;
}