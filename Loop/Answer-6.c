#include <stdio.h>

int main() {
    int X, guess, N;
    printf("Player-1, enter the secret number (X): ");
    scanf("%d", &X);
    printf("Player-2, how many tries do you have (N)? ");
    scanf("%d", &N);

    while (N > 0) {
        printf("Player-2, make a guess: ");
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            break; // Player-2 guessed correctly, terminate the loop
        } else {
            N--;
            if (N > 0)
                printf("Wrong, %d choice(s) left!\n", N);
            else
                printf("Player-1 wins!\n");
        }
    }

    return 0;
}
