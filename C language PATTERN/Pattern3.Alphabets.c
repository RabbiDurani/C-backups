#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+64);//For short hand alphabets use +96
        }
        printf("\n");
    }



    int n1,row1,col1;
    printf("Enter N :");
    scanf("%d",&n1);
    for(row1=1; row1<=n1; row1++)
    {
        for(col1=1; col1<=row1; col1++)
        {
            printf("%c ",row1+64);//For short hand alphabets use +96
        }
        printf("\n");
    }
}



