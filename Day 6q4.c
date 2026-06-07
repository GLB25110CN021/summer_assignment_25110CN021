#include <stdio.h>

double power(double base, int exp) {
    double res = 1.0;
    int positiveExp = (exp < 0) ? -exp : exp;

    for (int i = 0; i < positiveExp; i++) {
        res *= base;
    }

    return (exp < 0) ? 1.0 / res : res;
}

int main() {
    double x;
    int n;
    printf("Enter base (x) and exponent (n): ");
    scanf("%lf %d", &x, &n);
    printf("%.2lf ^ %d = %.2lf", x, n, power(x, n));
    return 0;
}
