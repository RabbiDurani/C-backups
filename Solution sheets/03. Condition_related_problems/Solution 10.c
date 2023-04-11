#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("Choose your operator(+,-*,/):");
    scanf("%ch",&op);
    printf("Enter two numbers=");
    scanf("%lf %lf",&num1,&num2);
    switch(op)
    {
    case'+':
    {
        printf("Addition=%.lf\n",num1+num2);
        break;
    }
    case'-':
    {
        printf("Substraction=%.lf\n",num1-num2);
        break;
    }
    case'*':
    {
        printf("Multiplication=%.lf\n",num1*num2);
        break;
    }
    case'/':
    {
        if(num2!=0)
        printf("Division=%lf\n",num1/num2);
        else
            printf("Zero as divisor is not valid!");
        break;
    }
    default:
        ("Not a valid operator");
    }
}
