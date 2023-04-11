/*(>)=greater than
(>=)=greater than equal
(<)=less than
(<=)=less than equal
(==)=equal
(!=)=not equal
Control statements are two types-1.Conditional control statement.(if-else,switch), 2.Loop control statement
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer value= ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even\n");
    else (num%2!=0);
    printf("Odd\n");//to use multiple statement under  if-else statement need to get them in a block using{} this sign on the up & closing at the bottom of the statement

    //comparing numbers using conditional control statements
    int num1,num2;
    printf("Enter the first value=");
    scanf("%d",&num1);
    printf("Enter the second value=");
    scanf("%d",&num2);
    if(num1>num2)
        printf("Large=%d\n",num1);
    else if(num2>num1)
        printf("large=%d\n",num2);
    else//{(if) also can'be used},but if the first condition is not met to its condition it will surely print out the else statement rather than looking for the next if statement}
        printf("Numbers are equal");


    float marks;
    printf("Enter marks=");
    scanf("%f",&marks);
    if(marks>=80)
        printf("A+");
    else if(marks>=70)
        printf("A");
    else if(marks>=60)
        printf("A-");
    else if(marks>=50)
        printf("B");
    else if(marks>=33)
        printf("D");
    else
        printf("Fail");

    //Identifying positive/negative numbers
    int num3;
    printf("enter any number");
    scanf("%d",&num3);
    if (num3>0)
        printf("Positive");
    else if(num3<0)
        printf("Negative");
    else
        printf("Zero");

    //Identifying Larger number./onnly posting the operators the opposite direction the Smaller number can'be identifyed
    int num4,num5;
    printf("Enter two Integers= ");
    scanf("%d %d",&num4,&num5);
    if(num4>num5)
        printf("Large=%d\n",num4);
    else if(num5>num4)
        printf("Large=%d\n",num5);
    else
        printf("Numbers are Equal");

        return 0;
}


