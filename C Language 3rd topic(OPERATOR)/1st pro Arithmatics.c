#include<stdio.h>
int main()
{

    int num1,num2,sum;
    printf("Enter two numbers= ");
    scanf("%d %d",&num1,&num2);

    sum= num1 + num2;
    printf("The sum is=%d\n",sum);




    int num3,num4,sum1;
    float avg;
    printf("Enter two numbers= ");
    scanf("%d %d",&num1,&num2);

    sum= num3 + num4;
    printf("The sum is=%d\n",sum);
    avg =(float)sum1/2;//Process is called Type casting(used to change variable type)
    printf("The average is=%.2f\n",avg);
    return 0;

    int num5,num6,result;
    printf("Enter two numbers= ");
    scanf("%d %d",&num5,&num6);

    result=num5+num6;
    printf("sum=%d\n",result);

    result=num5-num6;
    printf("sub=%d\n",result);

    result=num5*num6;
    printf("multification=%d\n",result);

    result=num5/num6;
    printf("Division=%d\n",result);

    result=num5%num6;
    printf("Reminder=%d\n",result);
}
