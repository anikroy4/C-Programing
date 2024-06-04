#include <stdio.h>

double calculateFunction(double x, int n) {
    double result = 0.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++) {
        term *= (x * x) / (2 * i * (2 * i - 1));
        result += term;
    }

    return result;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double functionValue = calculateFunction(x, n);
    printf("Function value for x = %.2lf: %.6lf\n", x, functionValue);

    return 0;
}
