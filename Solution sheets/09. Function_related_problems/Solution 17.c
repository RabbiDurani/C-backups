#include<stdio.h>
int GCD (int n1,int n2)
{
    int rem;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("GCD :%d\n",n1);
    return n1;
}
int LCM (int n1,int n2,int d)
{
    int e=(n1*n2)/d;
    printf("LCM :%d",e);
}
int main()
{
    int n1,n2;
    printf("Enter numbers :");
    scanf("%d %d",&n1,&n2);
    int d=GCD(n1,n2);
    LCM(n1,n2,d);
}
