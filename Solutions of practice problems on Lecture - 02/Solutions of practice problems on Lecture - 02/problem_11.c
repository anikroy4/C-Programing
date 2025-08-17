#include <stdio.h>

int main() {
    int N, i, result = 0, number = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        number = i * i * (i + 1);
        result += number;
    }

    printf("Result for the first %d terms: %d\n", N, result);
    return 0;
}

