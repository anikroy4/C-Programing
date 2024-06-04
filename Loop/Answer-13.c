#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %lld\n", N, factorial(N));

    return 0;
}
