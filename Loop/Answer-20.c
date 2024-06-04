#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int term = 0; // Initialize the term
    int sum = 0; // Initialize the sum

    for (int i = 1; i <= n; i++) {
        term = term * 10 + i; // Construct the next term
        sum += term; // Add the term to the sum
    }

    printf("Sum of the series up to %d terms: %d\n", n, sum);

    return 0;
}
