#include<stdio.h>
int main()
{

    int num[20],sum=0,n,i;

    printf("How many numbers :");
    scanf("%d",&n);

    printf("Enter numbers :");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<=n-1; i++)
    {
        if(i%2==0)
        {
            sum=sum+num[i];
        }
    }
    printf("Sum :%d",sum);
}
