#include<stdio.h>
int main()
{
    int a[3][3],r,c,sum=0,i,j;

    //Input for Matrix
    printf("Enter Elements for Matrix :\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Printing the Matrix
    printf("\nEntered Matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //Sum of Diagonal Elements
    printf("Diagonal Elements :");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                sum=sum + a[i][j];

            }

        }
    }
    printf("\nSum of Diagonal Elements :%d\n",sum);
}
