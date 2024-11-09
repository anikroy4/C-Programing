#include <stdio.h>

int main() {
    char category;
    int yearsOfExperience, familyMembers;
    float familyIncome;

    printf("Enter employee category (X, Y, Z): ");
    scanf(" %c", &category);
    printf("Enter years of work experience: ");
    scanf("%d", &yearsOfExperience);
    printf("Enter number of family members: ");
    scanf("%d", &familyMembers);
    printf("Enter total family income per month: ");
    scanf("%f", &familyIncome);

    int eligible = 0;

    if (category == 'X') {
        if (familyIncome < 10000.50 || familyMembers > 4) {
            eligible = 1;
        }
    } else if (category == 'Y' || category == 'Z') {
        if ((yearsOfExperience >= 12 && familyMembers > 5) || familyIncome < 10000.50) {
            eligible = 1;
        } else if (familyMembers > 8 && familyIncome < 11000) {
            eligible = 1;
        }
    }

    if (eligible) {
        printf("Will Receive the Bonus\n");
    } else {
        printf("Will Not Receive the Bonus\n");
    }

    return 0;
}
