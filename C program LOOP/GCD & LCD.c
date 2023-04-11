#include<stdio.h>
int main()
{
    int n1,n2,num1,num2,gcd,lcd,rem;//The reason of declaring two (n1 &n2)is that to keep the value of (num1 & num2) unchanged so that they canbe farther used in equations to take out their same value
    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcd=(num1*num2)/gcd;
    printf("GCD=%d\n",gcd);
     printf("LCD=%d\n",lcd);
}
