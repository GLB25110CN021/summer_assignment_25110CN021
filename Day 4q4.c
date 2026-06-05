#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        int temp = i, sum = 0, digits = 0;
        while (temp != 0) { temp /= 10; digits++; }
        temp = i;
        while (temp != 0) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }
        if (sum == i) printf("%d ", i);
    }
    return 0;
}
