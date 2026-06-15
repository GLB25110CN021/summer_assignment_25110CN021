#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 15, y = 25;
    printf("Maximum: %d\n", findMax(x, y));
    return 0;
}