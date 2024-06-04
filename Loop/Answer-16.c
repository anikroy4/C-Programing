#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0 && num2 > 0) {
        printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
        printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    } else {
        printf("Both numbers must be positive integers.\n");
    }

    return 0;
}
