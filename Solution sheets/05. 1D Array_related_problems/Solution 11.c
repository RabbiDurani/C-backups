#include<stdio.h>
int main()
{
    int num[20],i,n;

    printf("How many numbers :");
    scanf("%d",&n);

    printf("Enter numbers :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n; i++)
    {
        if(num[i]%3==0)
        {

            num[i]=-1;
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
}

