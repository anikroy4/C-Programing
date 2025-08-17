#include<stdio.h>
int main ()
{

    int i,j,num,x,y;
    printf("Enter the array size : ");
    scanf("%d",&num);
    int A[num];
    printf("Enter %d elements\n");
    for(i=0; i<num; i++)
    {
        scanf(" %d",&A[i]);
    }

    printf("Enter the x value : ");
    scanf("%d",&x);
    printf("Enter the y value : ");
    scanf("%d",&y);

    if (0<=x<=y<=num-1)
    {
        for (i = 0; i <= x; i++)
        {
            for (j = i+1; j <=x; j++)
            {
                if (A[i]>A[j])
                {
                    int temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;

                }
            }

        }

 for (i = y; i <num; i++)
        {
            for (j = i+1; j <num; j++)
            {
                if (A[i]<A[j])
                {
                    int temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;

                }
            }

        }

    }
    else
        printf("Invalide");

for(i=0; i<num; i++)
    {
        printf(" %d",A[i]);
    }
    return 0;
}
