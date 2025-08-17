#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        float attendance, assignments, classTests, midterm, termFinal;
        float totalMarks;

        printf("Enter the marks of student %d (Attendance, Assignments, Class Tests, Midterm, Term Final): ", i);
        scanf("%f%f%f%f%f", &attendance, &assignments, &classTests, &midterm, &termFinal);

        totalMarks = attendance + assignments + classTests + midterm * 0.6 + termFinal * 0.4;
        printf("%f", totalMarks);

        if (totalMarks >= 90) {
            printf("Student %d : A\n", i);
        } else if (totalMarks >= 86) {
            printf("Student %d : A-\n", i);
        } else if (totalMarks >= 82) {
            printf("Student %d : B+\n", i);
        } else if (totalMarks >= 78) {
            printf("Student %d : B\n", i);
        } else if (totalMarks >= 74) {
            printf("Student %d : B-\n", i);
        } else if (totalMarks >= 70) {
            printf("Student %d : C+\n", i);
        } else if (totalMarks >= 66) {
            printf("Student %d : C\n", i);
        } else if (totalMarks >= 62) {
            printf("Student %d : C-\n", i);
        } else if (totalMarks >= 58) {
            printf("Student %d : D+\n", i);
        } else if (totalMarks >= 55) {
            printf("Student %d : D\n", i);
        } else {
            printf("Student %d : F\n", i);
        }
    }

    return 0;
}

