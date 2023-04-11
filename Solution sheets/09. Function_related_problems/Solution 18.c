#include<stdio.h>
void multimat()
{
    int arr[3][5],i,j,m;
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("input[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d  ",arr[i][j]);

        }
        printf("\n");
    }
     printf("Number to multiply with :");
    scanf("%d",&m);
    printf("Multiplied by %d:\n",m);
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            arr[i][j]=arr[i][j]*m;
            printf("%d  ",arr[i][j]);

        }
        printf("\n");
    }
}
int main()
{
    multimat();
}
