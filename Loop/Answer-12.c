#include <stdio.h>

int main() {
    int N, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 3; i <= N; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
