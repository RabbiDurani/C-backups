#include<stdio.h>

void sum (int a,int b,int c)
{
    printf("The sum is :%d\n",a+b+c);
}
void sub (int a,int b)
{
    printf("The subtraction is :%d\n",a-b);
}

int main()
{
    sum (10,20,30);
    sum(100,400,200);
    sub(80,50);
    sub(30,46);
}
