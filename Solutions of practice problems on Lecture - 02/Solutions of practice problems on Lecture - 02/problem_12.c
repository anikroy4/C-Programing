#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int firstNum = 1, secondNum = 1;
    printf("Fibonacci series up to %d terms: %d, %d", N, firstNum, secondNum);

    for (i = 3; i <= N; i++) {
        int nextNum = firstNum + secondNum;
        printf(", %d", nextNum);
        firstNum = secondNum;
        secondNum = nextNum;
    }

    return 0;
}

