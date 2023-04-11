#include<stdio.h>
void multimat()
{
    int o,p,m;
    printf("Enter row & column :");
    scanf("%d %d",&o,&p);
    int arr[o][p],i,j;
    for(i=0; i<o; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("input[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original :\n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("%d  ",arr[i][j]);

        }
        printf("\n");
    }
    printf("Number to multiply with :");
    scanf("%d",&m);
    printf("Multiplied by %d:\n",m);
    for(i=0; i<o; i++)
    {
        for(j=0; j<p; j++)
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

