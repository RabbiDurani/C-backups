#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("Enter the value of Radius=");
    scanf("%f",&radius);
    area=M_PI* radius * radius;
    printf("Area of Circle is= %f",area);

}
//making output for area of circle using <math.h> library file
//area=3.1416(pi)*radius*radius
