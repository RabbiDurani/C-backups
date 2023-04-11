#include<stdio.h>
int main()
{

    int row,col;
    //Get size of mat
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter col:");
    scanf("%d",&col);

    int mat[row][col];

    //Taking input of the mat
    int i,j;
    printf("Enter the mat Element:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    if(row!=col)
    {
        printf("NOT");
    }
    else
    {
        //compute the transpose mat
        int tran[col][row];

        for(i=0; i<col; i++)
        {
            for(j=0; j<row; j++)
            {
                tran[i][j]=mat[j][i];
            }
        }
        /*check given mat elements and transpose
          mat elements are same or not.*/
        int flag=0;
        for(i=0; i<col; i++)
        {
            for(j=0; j<row; j++)
            {
                if(mat[i][j]!=tran[i][j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            printf("NOT");
        else
            printf("YES");
    }
}
