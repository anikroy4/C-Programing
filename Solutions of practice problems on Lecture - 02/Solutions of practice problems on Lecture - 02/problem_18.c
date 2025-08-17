#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (num != 0) { // Reverse the number
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}

