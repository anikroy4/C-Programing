#include <stdio.h>

int main()
{
    int number, num=1,i;
    scanf("%d",&number);
    for (i=1; i<=number ;i++)
    {
        printf("%d ",num);
        num += 2;
    }
}
