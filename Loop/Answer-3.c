#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the value of N (number of terms): ");
    scanf("%d", &N);
    printf("\n");

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0)
            printf("0");
        else
            printf("1");

        if (i != N)
            printf(", ");
    }

    return 0;
}

