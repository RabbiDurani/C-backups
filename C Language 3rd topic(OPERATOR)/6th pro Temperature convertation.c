//F=(c*1.8)+32
#include<stdio.h>
int main()
{
    float c,F;
    printf("Enter the value of Centigrade=");
    scanf("%f",&c);
    F=(c*1.8)+32;
    printf("The value of Fahrenheit=%f \n",F);

    float c1,F1;
    printf("Enter the value of Fahrenheit=");
    scanf("%f",&F1);
    c1=(F1-32)/1.8;
    printf("The value of Centigrade=%f",c1);
}


