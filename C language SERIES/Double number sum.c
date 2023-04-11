//Program for Double number sum. such(Enter n= 4 = (1/2.000000)+(1/3.000000)+(1/4.000000)=2.08)
#include<stdio.h>
int main()
{
    double sum=0,n,i;
    printf("Enter n= ");
    scanf("%lf",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);

        if(i==1)
            printf("\n+ ");
        else if(i==n)
            printf("(1/%lf)",i);
        else
            printf("(1/%lf)+",i);
    }
    printf("=%.2lf\n",sum);
}
