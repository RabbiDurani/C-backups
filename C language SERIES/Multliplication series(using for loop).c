#include<stdio.h>
int main()
{
    //Program for Multiplication of numbers with (square) till(n)
    int n,multi=1,i;
    printf("Enter the ending number of the series:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
        multi=multi*(i*i);
    }
    printf(" \nMulti= %d\n",multi);

    //Program for Multiplication of Even numbers till(n)
    int n1,multi1=1,i1;
    printf("Enter the ending number of the series:");
    scanf("%d",&n1);

    for(i1=2; i1<=n1; i1=i1+2)
    {
        printf("%d ",i1);
        multi1=multi1*(i1*i1);
    }
    printf(" \nMulti= %d\n",multi1);


    //Program for Multiplication of Odd numbers till(n)
    int n2,multi2=1,i2;
    printf("Enter the ending number of the series:");
    scanf("%d",&n2);

    for(i2=1; i2<=n2; i2=i2+2)
    {
        printf("%d ",i2);
        multi2=multi2*(i2*i2);
    }
    printf(" \nMulti= %d\n",multi2);




}
