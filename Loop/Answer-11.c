#include <stdio.h>

int main() {
    int N;
    float sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        float term = i * (i + 1) * 0.1; // Calculate each term
        sum += term;
    }

    printf("Sum of the first %d terms: %.2f\n", N, sum);

    return 0;
}
