#include <stdio.h>


void printCharacter(char inputChar) {
    printf("The entered character is: %c\n", inputChar);
}

int main() {
    char inputChar;


    printf("Enter a character: ");
    scanf("%c", &inputChar);

    printCharacter(inputChar);

    return 0;
}

