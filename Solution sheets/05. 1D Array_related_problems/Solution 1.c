#include<stdio.h>
int main()
{
    int num[20],n,i;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("Enter numbers:");

    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&num[i]);

    }

    for(i=n-1; i>=0; i--)

    {
        printf("%d ",num[i]);
    }
}

