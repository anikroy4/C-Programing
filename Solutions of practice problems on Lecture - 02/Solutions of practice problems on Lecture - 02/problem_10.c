#include <stdio.h>

int main() {
    int N, i, number;
    int sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            number = -i;
        } else {
            number = i;
        }
        sum += number;
    }

    printf("Sum of the first %d terms: %d\n", N, sum);
    return 0;
}

