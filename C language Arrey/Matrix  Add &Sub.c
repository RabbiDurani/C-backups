#include<stdio.h>
int main()
{
    int i,j,Rows,Columns;
    int A[10][10],B[10][10],C[10][10],S[10][10];
//Scanning A Matrix
    printf("Enter numbers of Rows & Columns :");

    scanf("%d %d",&Rows,&Columns);

    printf("Enter value for A Matrix :\n");

    for(i=0; i<Rows; i++)
    {
        for(j=0; j<Columns; j++)
        {
            printf("A[%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

//Scanning B Matrix
    printf("\n\nEnter value for B Matrix :\n");
    for(i=0; i<Rows; i++)
    {
        for(j=0; j<Columns; j++)
        {
            printf("B[%d][%d] :",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //Printing A Matrix
    printf("A =");
    for(i=0; i<Rows; i++)
    {
        printf("\t");
        for(j=0; j<Columns; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Printing B Matrix
    printf("\nB =");
    for(i=0; i<Rows; i++)
    {
        printf("\t");
        for(j=0; j<Columns; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Addition of 2 Matrix
    for(i=0; i<Rows; i++)
    {
        for(j=0; j<Columns; j++)
        {
            C[i][j]=A[i][j] + B[i][j];
        }
    }

    //Printing C Matrix result (Addition)
    printf("\nA + B =");
    for(i=0; i<Rows; i++)
    {
        printf("\t");
        for(j=0; j<Columns; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    //Subtraction of 2 Matrix
    for(i=0; i<Rows; i++)
    {
        for(j=0; j<Columns; j++)
        {
            C[i][j]=A[i][j] - B[i][j];
        }
    }


    //Printing S Matrix result (Subtraction)
    printf("\nA - B =");
    for(i=0; i<Rows; i++)
    {
        printf("\t");
        for(j=0; j<Columns; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
