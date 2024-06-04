#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime if less than or equal to 1

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0; // Not prime if divisible by any number from 2 to sqrt(num)
    }

    return 1; // Prime if no divisors found
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
