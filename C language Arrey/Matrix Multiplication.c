#include<stdio.h>
#define N 10
int main()
{
    int first[N][N],second[N][N],result[N][N],r1,r2,c1,c2,i,j,sum=0,k;

    printf("Enter Rows & Columns for first Matrix :");

    scanf("%d %d",&r1,&c1);

    printf("Enter Rows & Columns for second Matrix :");

    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! Column of first matrix is not equal to Row of second matrix\n");

        printf("Enter Rows & Columns for first Matrix :");

        scanf("%d %d",&r1,&c1);

        printf("Enter Rows & Columns for second Matrix :");

        scanf("%d %d",&r2,&c2);
    }

    //Input for First Matrix
    printf("\nEnter First Matrix :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First[%d][%d] :",i,j);
            scanf("%d",&first[i][j]);
        }

    }


    //Input for Second Matrix
    printf("\nEnter Second Matrix :\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second[%d][%d] :",i,j);
            scanf("%d",&second[i][j]);
        }

    }
    //Multiplying Matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum =sum+first[i][k] * second[k][j];
            }
            result[i][j] =sum;
            sum =0;
        }
    }


    //Printing First Matrix
    printf("\n\nFirst Matrix :\n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);

        }
        printf("\n");
    }


    //Printing Second Matrix
    printf("\n\nSecond Matrix :\n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);

        }
        printf("\n");
    }

    //Printing Result Matrix
    printf("\n\nResult Matrix :\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);

        }
        printf("\n");
    }
}

