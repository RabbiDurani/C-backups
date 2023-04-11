#include<stdio.h>
#include<math.h>
#include<stdlib.h>//studio library header file
int main()
{
    float x,p;
    printf("Enter value for X=");
    scanf("%f",&x);
    int y=ceil(x);
    printf("A=%d\n",y);

    int z=floor(x);
    printf("B=%d\n",z);

    x=fabs(x);
    printf("C=%f\n",x);
}

