#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the value of N (number of terms): ");
    scanf("%d", &N);
    printf("\n");

    for (i = 1; i <= N; i++) {
        if (i == N)
            printf("%d", 2 * i - 1);
        else
            printf("%d, ", 2 * i - 1);
    }

    return 0;
}
