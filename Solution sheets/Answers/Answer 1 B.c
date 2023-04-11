#include<stdio.h>
int main()
{
    int i,j,n,m;

    printf("Enter n & m :");
    scanf("%d %d",&n,&m);

    int arr[m][n];

    //input
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //reverse
    for(i=0;i<m;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
