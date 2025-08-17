#include <stdio.h>

int main()
{
    int number,i;
    scanf("%d",&number);
    for (i=1; i<=number ;i++)
    {
        if(i%2!=0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if (i != number)
        {
            printf(", ");
        }
    }
}
