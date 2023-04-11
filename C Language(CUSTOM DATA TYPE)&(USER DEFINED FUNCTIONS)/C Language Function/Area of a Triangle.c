#include<stdio.h>

double area(double b,double h)
{
    return(0.5*b*h);
}

int main()
{
    double base,height;
    printf("Enter Base :");
    scanf("%lf",&base);
    printf("Enter Area :");
    scanf("%lf",&height);
    double res =area(base,height);
    printf("Area :%.lf\n",res);
}
