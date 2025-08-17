#include <stdio.h>

int main() {
    int n;
    int num = 0;
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        num = num * 10 + i;
        sum += num;
    }

    printf("Sum of the series up to %d terms: %d\n", n, sum);
    return 0;
}

