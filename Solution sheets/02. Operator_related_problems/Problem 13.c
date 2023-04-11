#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x,y,w,v;
    printf("Enter value for X=");
    scanf("%lf",&x);

    double z;
    z=cos(x);
    w=sqrt(3)*sin(x);
    v=log(x);
    y=(2*z*z)-w+(v/2);
    printf("The equations output=%lf",y);
}
