#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the ending number of the series:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf(" \nSum= %d\n",sum);


    //Program for sum of Even numbers till(n)
    int n1,sum1=0,i1;
    printf("Enter the ending number of the series:");
    scanf("%d",&n1);

    for(i1=2; i1<=n1; i1=i1+2)
    {
        printf("%d ",i1);
        sum1=sum1+i1;
    }
    printf("\nSum = %d\n",sum1);


    //Program for sum of Odd numbers till(n)
    int n2,sum2=0,i2;
    printf("Enter the ending number of the series:");
    scanf("%d",&n2);

    for(i2=1; i2<=n2; i2=i2+2)
    {
        printf("%d ",i2);
        sum2=sum2+i2;
    }
    printf(" \nSum= %d\n",sum2);


//Program for sum of numbers with (square) till(n)
    int n3,sum3=0,i3;
    printf("Enter the ending number of the series:");
    scanf("%d",&n3);

    for(i3=1; i3<=n3; i3++)
    {

        sum3=sum3+i3*i3;
    }
    printf(" \nSum= %d\n",sum3);


    //Float number sum
  /*  float i,sum=0,n;
    printf("Enter n= ");
    scanf("%f",&n);

    for(i=1.5;i<=n;i++)
    {
         sum=sum+i;
    }
    printf("Sum =%.1f\n",sum);*/
}

