#include<stdio.h>
int main()
{
    int col,row,i,j,mat[20],temp=-1;

    printf("Enter row & col :");
    scanf("%d %d",&row,&col);

    printf("Enter values :");
    for(i=0; i<row*col; i++)
    {
        scanf("%d",&mat[i]);
    }

    for(i=1;i<row*col;i++)
    {
        for(j=0;j<i-1;j++)
        {
            if(mat[i]==mat[j])
            {
                mat[i]=temp;
                break;
            }
        }
    }

    printf("\n");
    for(i=0;i<row*col;i++)
    {
        if(i%col==0)
            printf("\n");
        printf("%d ",mat[i]);
    }


}
