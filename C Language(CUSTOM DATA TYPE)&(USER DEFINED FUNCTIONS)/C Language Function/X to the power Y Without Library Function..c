#include<stdio.h>

void calculatepower(double base,double exp)
{
    double result=1,i;
    for(i=1; i<=exp; i++)
    {
        result=base* result;
    }
    printf("Result :%.1lf\n",result);
}



int main()
{
    double base,exp;

    printf("Enter Base =");
    scanf("%lf",&base);

    printf("Enter Exponent =");
    scanf("%lf",&exp);
    calculatepower(base,exp);
}
