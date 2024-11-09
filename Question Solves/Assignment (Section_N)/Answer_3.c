#include <stdio.h>

int main() {
    int score;
    printf("Enter the final score of the student: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
    } else if (score >= 86 && score <= 89) {
        printf("Grade: A-\n");
    } else if (score >= 82 && score <= 85) {
        printf("Grade: B+\n");
    } else if (score >= 78 && score <= 81) {
        printf("Grade: B\n");
    } else if (score >= 74 && score <= 77) {
        printf("Grade: B-\n");
    } else if (score >= 70 && score <= 73) {
        printf("Grade: C+\n");
    } else if (score >= 66 && score <= 69) {
        printf("Grade: C\n");
    } else if (score >= 62 && score <= 65) {
        printf("Grade: C-\n");
    } else if (score >= 58 && score <= 61) {
        printf("Grade: D+\n");
    } else if (score >= 55 && score <= 57) {
        printf("Grade: D\n");
    } else {
        printf("The grade is: F\n");
    }

    return 0;
}

