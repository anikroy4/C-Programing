#include <stdio.h>

int main() {
    int num, reversed = 0, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store the original number

    while (num != 0) {
        int digit = num % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
