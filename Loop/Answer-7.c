#include <stdio.h>

int main() {
    char ch;
    printf("Type any character (press 'A' to exit):\n");

    while (1) {
        ch = getchar(); // Read a character from the keyboard

        if (ch == 'A' || ch == 'a') {
            printf("You typed 'A'. Exiting...\n");
            break; // Exit the loop when 'A' is typed
        } else {
            printf("You typed: %c\n", ch);
        }
    }

    return 0;
}
