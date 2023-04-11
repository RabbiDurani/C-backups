//program to display data type and format specifiers


#include<stdio.h>
int main()
{
    int num1=20;
    int num2=30;
    printf("Number 1 is %d\n",num1);
    printf("Number 2 is %d\n",num2);
    printf("Numbers are  %d, %d\n",num1,num2);

    float num3=11.5;
    double num4=51.55463246557;
    char ch='g';
    printf("Number 3 is %f\n",num3);
    printf("Number 3 is %.1f\n",num3);
    printf("Number 4 is %lf\n",num4);
    printf("Number 5 is %c\n",ch);

//program for taking input
    int num;
    printf("please enter an  integer value");
    scanf("%d",&num);
    printf("You have pressed :%d\n",num);
    float num5;
    printf("please enter an  float value");
    scanf("%f",&num5);
    printf("You have pressed :%f\n",num5);
    double num6;
    printf("please enter an  double value");
    scanf("%lf",&num6);
    printf("You have pressed :%lf\n",num6);
    char num7;
    printf("please enter an character value");
    scanf("%c",&num7);
    printf("You have pressed :%c\n",num7);


}
