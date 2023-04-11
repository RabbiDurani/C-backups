#include<stdio.h>
int main()
{
    //using unary plus
    int a=24;
    int result=+a;
    printf("%d\n",result);

    //using unary minus
    int a1=24;
    int result1=-a1;
    printf("%d\n",result1);

    //using post increment
    int x=10;
    int y=x++;//y=10
    printf("x=%d\n",x);//x=11
    printf("y=%d\n",y);//y=10

    //using pre increment
    int x1=10;
    int y1=++x1;//y=11
    printf("x1=%d\n",x1);//x=11
    printf("y1=%d\n",y1);//y=11

    //using post decrement
    int x2=10;
    int y2=x2--;//y=10
    printf("x2=%d\n",x2);//x=9
    printf("y2=%d\n",y2);//y=10

    //using pre decrement
    int x3=10;
    int y3=--x3;//y=9
    printf("x3=%d\n",x3);//x=10
    printf("y3=%d\n",y3);//y=9

    //for better understanding increment/decrement
    int x4=10;
    printf("%d\n",x4++);//x=10
    printf("%d\n",x4);  //x=11
    printf("%d\n",++x4);//x=12
    printf("%d\n",x4);  //x=12
    printf("%d\n",x4--);//x=12
    printf("%d\n",--x4);//x=10

}
