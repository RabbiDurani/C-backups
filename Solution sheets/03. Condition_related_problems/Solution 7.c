#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter two numbers :");

    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        printf("%d is Greater than %d",num1,num2);

    else if(num1<num2)

    printf("%d is Less than %d",num1,num2);

    else if(num1==num2)
        printf("%d is equals to %d",num1,num2);
}
