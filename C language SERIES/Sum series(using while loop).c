#include<stdio.h>
int main()
{
    int n,sum=0,a=1;

    printf("Enter the ending number : ");
    scanf("%d",&n);
    printf("1+2+3......+%d",n);

    while(a<=n)
    {
        sum=sum+a;
        a=a+1;
    }
    printf("=%d\n",sum);


    int n2,sum2=0,a2=2;

    printf("Enter the ending number : ");
    scanf("%d",&n2);
    printf("2+4+6......+%d",n2);

    while(a2<=n2)
    {
        sum2=sum2+a2;
        a2=a2+2;
    }
    printf("=%d\n",sum2);



    int n1,sum1=0,a1=1;

    printf("Enter the ending number : ");
    scanf("%d",&n1);
    printf("1+3+5......+%d",n1);

    while(a1<=n1)
    {
        sum1=sum1+a1;
        a1=a1+2;
    }
    printf("=%d\n",sum1);
}
