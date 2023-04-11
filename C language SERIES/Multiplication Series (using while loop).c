//Multiplication series
#include<stdio.h>
int main()
{
   int n1,n2,sum=0,a=1,b=2;

    printf("Enter the n1 & n2 : ");
    scanf("%d %d",&n1,&n2);

    printf("(1*2)+(2*3)+(3*4)......+%d",n1,n2);

    while(a<=n1 && b<=n2)
    {
        sum=sum+a*b;
        a=a+1;
        b=b+1;
    }
    printf("=%d\n",sum);
    getch();


    int n3,n4,n5,sum1=0,a1=1,b1=3,c1=4;

    printf("Enter the n3 & n4 &n5 : ");
    scanf("%d %d %d",&n3,&n4,&n5);

    printf("(1*3*4)+(2*5*5)+(3*7*6)......+%d",n3,n4,n5);

    while(a1<=n3 && b1<=n4 && c1<=n5)
    {
        sum1=sum1+a1*b1*c1;
        a1=a1+1;
        b1=b1+2;
        c1=c1+1;
    }
    printf("=%d\n",sum1);
    getch();

}


