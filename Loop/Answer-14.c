#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n >= r)
        printf("%dC%d = %lld\n", n, r, nCr(n, r));
    else
        printf("Invalid input: n must be greater than or equal to r.\n");

    return 0;
}
