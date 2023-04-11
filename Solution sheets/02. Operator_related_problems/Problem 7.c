#include<stdio.h>
int main()
{
    //assignment operation
      int x=123.125;
      printf("The value of Assignment=%d\n",x);


      float y=-150;
      printf("The value of Assignment in float= %f\n",y);

//type casting

    int x1;
    float y1;
    printf("Enter value (int)=");
    scanf("%d",&x1);
    y1=(float)x1;
    printf("The value of Assignment=%f\n",y1);

    int y2;
    float x2;
    printf("Enter value for (float)=");
    scanf("%f",&x2);
    y2=(float)x2;
    printf("The value of Assignment=%d",y2);
}
