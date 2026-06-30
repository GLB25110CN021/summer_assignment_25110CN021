#include <stdio.h>

void merge(int arr1[], int n1, int arr2[], int n2, int res[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) res[k++] = arr1[i++];
        else res[k++] = arr2[j++];
    }
    while (i < n1) res[k++] = arr1[i++];
    while (j < n2) res[k++] = arr2[j++];
}

int main() {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6};
    int res[6];
    merge(a, 3, b, 3, res);
    for(int i=0; i<6; i++) printf("%d ", res[i]);
    return 0;
}

