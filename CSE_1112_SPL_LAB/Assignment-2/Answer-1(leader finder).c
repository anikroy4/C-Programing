#include<stdio.h>
int main ()

{
    int i,j,num,k;
    printf("Enter the array size : ");
    scanf("%d",&num);
    int A[num],B[num];
    printf("Enter %d elements\n");
    for(i=0; i<num; i++)
    {
        scanf(" %d",&A[i]);
    }

printf("Ans : ");
    for(i=0; i<num; i++)
    {
    int X=0;
        for(j=i+1; j<num; j++)
        {
            if(A[i]<A[j])
            { X=1;
                break;
            }
        }

    if (X==0)
        printf("%d ",A[i]);

    }

    return 0;
}
