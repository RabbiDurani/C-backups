#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter N :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=i;
        for(k=1;k<=i;k++)
        {
            printf("%d",j++);
        }
        printf("\n");
    }
}

