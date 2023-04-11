#include<stdio.h>
int main()
{
    int i,j,a[20][20],row,col;

    printf("Enter no. of Column & Rows :");
    scanf("%d %d",&row,&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    printf("Reversed Matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=col-1; j>=0; j--)
            printf("%d ",a[i][j]);
              printf("\n");
    }



}
