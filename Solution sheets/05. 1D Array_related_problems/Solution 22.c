#include<stdio.h>
int main()
{
    int col,row,i,j,mat[20][20],temp[20][20],sum=0;

    printf("Enter row & col :");
    scanf("%d %d",&row,&col);

    printf("Enter values :");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
          sum=sum+mat[i][j];
        }
    }

    printf("SUM :%d",sum);
}
