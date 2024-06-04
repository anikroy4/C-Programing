#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int attendance, assignment, classTest, midterm, termFinal;
        float totalMarks, percentage;

        printf("\nStudent %d:\n", i);
        printf("Enter attendance marks (out of 5): ");
        scanf("%d", &attendance);
        printf("Enter assignment marks (out of 10): ");
        scanf("%d", &assignment);
        printf("Enter class test marks (out of 15): ");
        scanf("%d", &classTest);
        printf("Enter midterm marks (out of 50): ");
        scanf("%d", &midterm);
        printf("Enter term final marks (out of 100): ");
        scanf("%d", &termFinal);

        totalMarks = attendance + assignment + classTest + midterm + termFinal;
        percentage = (totalMarks / 180) * 100;

        printf("Total marks obtained: %.2f\n", totalMarks);
        printf("Percentage: %.2f%%\n", percentage);

        if (percentage >= 90)
            printf("Grade: A+\n");
        else if (percentage >= 80)
            printf("Grade: A\n");
        else if (percentage >= 70)
            printf("Grade: B\n");
        else if (percentage >= 60)
            printf("Grade: C\n");
        else
            printf("Grade: F\n");
    }

    return 0;
}
