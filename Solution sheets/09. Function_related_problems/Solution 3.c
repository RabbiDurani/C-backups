#include<stdio.h>

int  sum ()
{
    int a,b,c,sum=0;
    printf("Enter values :");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("Sum in function :%d\n",sum);
    return sum;
}
int sum1()
{
    int a,b,sum1=0;
    printf("Enter values :");
    scanf("%d %d",&a,&b);
    sum1=a+b;
    printf("Sum in function :%d\n",sum1);
    return sum1;
}
int main()
{
    int  n;
    printf("Enter N:");
    scanf("%d",&n);

    if(n==3)
    {
        int d= sum();
         printf("Sum in main :%d",d);
    }
    else if(n==2)
    {
        int d= sum1();
        printf("Sum in main :%d",d);
    }

}
