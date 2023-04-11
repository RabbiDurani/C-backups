#include<stdio.h>
#define n 10
int main()
{
    int a[n][n],tran[n][n],i,j,row,col;
    printf("Enter number of Rows & Columns :");
    scanf("%d %d",&row,&col);
    //Input for Matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);

        }
    }

     //Transposing Matrix

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            tran[j][i]=a[i][j];
        }
    }


    //Printing Matrix
    printf("\nEnter Matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

//Transposing Matrix
    printf("\nTransposed Matrix :\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }

}
