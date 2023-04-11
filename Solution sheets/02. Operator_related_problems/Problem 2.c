#include<stdio.h>
#include<math.h>
int main()
{
    float area,radius;
    printf("Enter radius=");
    scanf("%f",&radius);
    area= 2* M_PI * radius;
    printf("Area of the circle is=%f",area);
}
