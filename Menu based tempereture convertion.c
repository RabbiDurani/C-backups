#include<stdio.h>
int main()
{
    int choise;
    float tempt,convertedTempt;
    printf("Temperature conversion Menu\n ");
    printf("1 Fahrenheit to Celsius\n");
    printf("2 Celsius to Fahrenheit\n");
    printf("Enter your choice");
    scanf("%d",&choise);
    switch(choise)
    {
    case 1:
    {
        printf("Please enter Fahrenheit =");
        scanf("%f",&tempt);
        convertedTempt=(tempt-32)/1.8;
        printf("The temperature in Celsius=%f\n",convertedTempt);
        break;
    }
    case 2:
    {
        printf("Please enter Celsius =");
        scanf("%f",&tempt);
        convertedTempt=(tempt*1.8)+32;
        printf("The temperature in Fahrenheit=%f\n",convertedTempt);
        break;
    }
    default:
        printf("Not a correct option");
    }
}
