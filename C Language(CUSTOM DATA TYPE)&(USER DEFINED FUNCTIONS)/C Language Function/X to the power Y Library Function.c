//Base ^ Exponent
//  2  ^  3 =2*2*2    =8
//  2  ^  4 =2*2*2*2  =16
//  3  ^  4 =3*3*3*3  =81
#include<stdio.h>
int main()
{

    //Using library function
    double base,exp,result;

    printf("Enter Base =");
    scanf("%lf",&base);

     printf("Enter Exponent =");
    scanf("%lf",&exp);

    result = pow(base,exp);//this library file always gives out put in Double type number

    printf("Result :%.1lf\n",result);

    //Without using library function

     double base1,exp1,result1=1,i;

    printf("Enter Base =");
    scanf("%lf",&base1);

     printf("Enter Exponent =");
    scanf("%lf",&exp1);
    for(i=1;i<=exp1;i++)
    {
     result1=base1* result1;
    }
  printf("Result :%.1lf\n",result1);


}
