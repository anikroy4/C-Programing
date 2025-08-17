#include <stdio.h>

int main() {
    int num1, num2;
    int originalNum1, originalNum2;
    int gcd, lcm;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    originalNum1 = num1;
    originalNum2 = num2;

    // Calculate GCD using Euclidean algorithm
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcd = num1;

    // Calculate LCM using the formula LCM = (num1 * num2) / GCD
    lcm = (originalNum1 * originalNum2) / gcd;

    printf("GCD of %d and %d is: %d\n", originalNum1, originalNum2, gcd);
    printf("LCM of %d and %d is: %d\n", originalNum1, originalNum2, lcm);

    return 0;
}

