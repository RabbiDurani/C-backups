#include<stdio.h>
int main()
{
    float a,b;

    int choice,quo;
    quo=a/b;

    printf("Enter a & b :");
    scanf("%f %f",&a,&b);

    printf("Choice between 1-4 :");
    scanf("%d",&choice);



    switch(choice)

    {
    case 1:
    {
        printf("Addition=%.f\n",a+b);
        break;
    }

    case 2:
    {
        printf("Subtraction=%.f\n",a-b);
        break;
    }
    case 3:
    {
        printf("Multiplication=%.f\n",a*b);
        break;
    }
    case 4:
    {

        printf("Quotient=%d\n",quo);
        break;
    }
    default:

        ("Choice is not between 1-4");
    }
}
