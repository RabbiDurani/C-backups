#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,rem;
    int choice,quo,c1;

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
        printf("\nEnter choice 1-2 :");
        scanf("%d",&c1);


        switch(c1)
        {
        case 1:
        {
            quo=a/b;

            printf("Quotient =%d\n",quo);
            break;
        }
        case 2:
        {
            rem=remainder(a,b);
            printf("Reminder =%f\n",rem);
            break;
        }
        }


        break;
    }
    default:

        ("Choice is not between 1-4");
    }
}

