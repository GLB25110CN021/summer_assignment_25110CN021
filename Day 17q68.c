#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40}, b[] = {20, 40, 60, 80};
    int n = 4;
    printf("Common Elements: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) printf("%d ", a[i]);
        }
    }
    return 0;
}