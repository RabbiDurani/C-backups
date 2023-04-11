#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter N :");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {
        //for printing space
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        //for printing numbers
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
