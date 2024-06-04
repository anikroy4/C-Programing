#include <stdio.h>

long long power(int x, int y) {
    long long result = 1;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    printf("Enter a positive integer (x): ");
    scanf("%d", &x);
    printf("Enter another positive integer (y): ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0) {
        printf("%d^%d = %lld\n", x, y, power(x, y));
    } else {
        printf("Both x and y must be positive integers.\n");
    }

    return 0;
}
