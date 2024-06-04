#include <stdio.h>

int main() {
    int N, i, term, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        term = (i % 2 == 0) ? -i : i; // Alternate positive and negative terms
        sum += term;
    }

    printf("Sum of the first %d terms: %d\n", N, sum);

    return 0;
}
