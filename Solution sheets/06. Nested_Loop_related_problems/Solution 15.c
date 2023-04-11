#include<stdio.h>
int main()
{
    int i,j,n,l;

    printf("Enter N :");
    scanf("%d",&n);
    l=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 &&j>=1||i==n && j>=1)
            {
                printf("Z");
            }
            else if( i>1 && j==l )
            {
                printf("Z");
                l=l-1;
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

}
