#include<stdio.h>
int main()
{
    int a[3][3],r,c,uppersum=0,lowersum=0,i,j;

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

    //Sum of Upper & Lower Triangle Elements

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                uppersum=uppersum + a[i][j];
            }
            if(i>j)
            {
                lowersum=lowersum + a[i][j];
            }

        }
    }
    printf("\nSum of  Upper Triangle Elements :%d\n",uppersum);
    printf("\nSum of Lower Triangle Elements :%d\n",lowersum);
}
