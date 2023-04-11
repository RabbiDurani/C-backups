#include<stdio.h>
#include<math.h>
int main()
{
    //using library file=(abs=absolute value)/For float number print out have to use fabs for absolute value
   int result=abs(-25);
   printf("%d\n",result);

   //using library file=(sqrt=square root over)
   double result1=sqrt(25);
   printf("%lf\n",result1);

   //using library file=(pow=power)
   double result2=pow(5,2);//this library file always gives out put in Double type number
   printf("%lf\n",result2);

   //using library file=log(this function canbe used for other library functions.such as:log10,exp,sin,cos,tan)
    double x=10.5;
    double result3=log(x);
    printf("log(%lf)=%lf\n",x,result3);


    //using library file=round(it offers round file based on the value next to the desimal sign below or above 5)
    double x1=5.55;
    double result4=round(x1);
    printf("round (%lf)=%lf\n",x1,result4);


    //using library file=trunc(it displays only the values before desimal sign)
    double x2=5.55675767;
    double result5=trunc(x2);
    printf("trunc (%lf)=%lf\n",x2,result5);


    //using library file=ceiling(it displays the next full number canbe displayer without desimal sign)
    double x3=5.55675767;
    double result6=ceil(x3);
    printf("ceil (%lf)=%lf\n",x3,result6);


    //using library file=floor(exact opposite to ceiling)
    double x4=5.55675767;
    double result7=floor(x4);
    printf("floor (%lf)=%lf\n",x4,result7);
    return 0;

}
