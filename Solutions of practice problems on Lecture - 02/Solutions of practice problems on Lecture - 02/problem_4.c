#include <stdio.h>

int main()
{
    int n, i;
    float number, sum = 0, average;
    printf("How many number you want to get average from : ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &number);
        sum += number;
    }
    average = sum / n;
    printf("The average of the numbers is: %f\n", average);
}
