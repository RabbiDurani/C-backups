#include<stdio.h>
int main()
{
    int num[20],i,n,sum=0;

    printf("How many numbers :");
    scanf("%d",&n);

    printf("Enter numbers :");

    for(i=0; i<=n-1; i++)

    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n; i++)

    {
       if(num[i]%2==0)
        sum=sum+num[i];
    }
    printf("sum :%d",sum);

}

