#include<stdio.h>
int main()
{
    int i,j,n,k;

    printf("Enter N :");
    scanf("%d",&n);

    k=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 ||j==n || i==k)
            {
                printf("H ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
