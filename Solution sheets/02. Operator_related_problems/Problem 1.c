#include<stdio.h>
int main()
{
    /*int x,y,sum,sub,multi,quo,rim;
    printf("Enter value for X,Y = ");
    scanf("%d %d",&x,&y);

    sum=x + y;

    printf("Addition=%d\n",sum);

    sub=x-y;
    printf("Subtraction=%d\n",sub);

    multi=x*y;
    printf("multiplication=%d\n",multi);

    quo=x/y;
    printf("Quotient=%d\n",quo);

    rim=x%y;
    printf("Reminder=%d\n",rim);*/


    float x1,y1,sum1,sub1,multi1,quo1,rem1,result;

    printf("Enter value for X,Y = ");
    scanf("%f %f",&x1,&y1);

    sum1=x1+y1;

    printf("Addition=%.1f\n",sum1);

    sub1=x1-y1;
    printf("Subtraction=%.1f\n",sub1);

    multi1=x1*y1;
    printf("Multiplication=%.1f\n",multi1);

    quo1=x1/y1;
    printf("Quotient=%.1f\n",quo1);

    rem1=(int)x1%y1;
    printf("Reminder=%d\n",rem1);

}
