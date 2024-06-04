#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the value of X: ");
    scanf("%d", &X);
    printf("Enter the value of Y: ");
    scanf("%d", &Y);

    while (X != Y) {
        printf("Square of X (%d): %d\n", X, X * X);

        if (X < Y)
            X++; // Increment X
        else
            X--; // Decrement X
    }

    printf("Reached!\n");
    return 0;
}
