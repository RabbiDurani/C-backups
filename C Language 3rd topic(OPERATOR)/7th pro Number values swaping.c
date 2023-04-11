/*#include<stdio.h>
int main()
{
    int num1=10,num2=5;
    int temp;
    temp=num1;//temp=10
    num1=num2;//num1=5
    num2=temp;//num2=10
    printf("num1=%d\n",num1);
    printf("num2=%d",num2);
}*/
#include<stdio.h>
int main()
{
    int num1=10,num2=5;
    num1=num1-num2;//5
    num2=num1+num2;//10
    num1=num2-num1;//5
    printf("num1=%d\n",num1);
    printf("num2=%d",num2);
}
