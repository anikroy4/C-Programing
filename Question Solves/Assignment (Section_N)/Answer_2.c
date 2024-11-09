#include <stdio.h>

int main() {
    int x, y, z, sum;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &x, &y, &z);

    sum = x + y + z;

    if (x > 0 && x < 180 && y > 0 && y < 180 && z > 0 && z < 180 && sum == 180) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

