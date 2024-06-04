#include <stdio.h>

int main() {
    int N, i, num, sum = 0;
    float average;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = (float)sum / N;
    printf("The average of %d numbers is %.2f\n", N, average);

    return 0;
}
