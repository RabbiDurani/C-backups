#include<stdio.h>
int main()
{
    int i,n,x=1,sum=0;

    printf("Enter n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
            printf("%d",i);
        else
        {
            x=x*10+i;
             printf("+%d",x);
        }
        sum=sum+x;
    }
    printf("=%d",sum);
}
