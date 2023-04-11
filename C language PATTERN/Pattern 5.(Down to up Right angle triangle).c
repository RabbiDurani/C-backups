#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }




    int n1,row1,col1;
    printf("Enter N :");
    scanf("%d",&n1);
    for(row1=n1; row1>=1; row1--)
    {
        for(col1=1; col1<=row1; col1++)
        {
            printf("%d ",row1);
        }
        printf("\n");
    }

}
