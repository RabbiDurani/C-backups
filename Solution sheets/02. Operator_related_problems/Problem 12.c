#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter value for A,B&C=");
    scanf("%f %f %f",&a,&b,&c);

    d=sqrt(b*b-4*a*c);

    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    printf("The first value =%.2f\n",x1);
    printf("The second value =%.2f\n",x2);
}
