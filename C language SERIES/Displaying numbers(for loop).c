#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n",i);
    }

    //For displaying Odd numbers
    int i1,n1;
    printf("Enter n :");
    scanf("%d",&n1);
    for(i1=1; i1<=n1; i1=i1+2)
    {
        printf("%d\n",i1);
    }


    //For displaying Even numbers
    int i2,n2;
    printf("Enter n :");
    scanf("%d",&n2);
    for(i2=2; i2<=n2; i2=i2+2)
    {
        printf("%d\n",i2);
    }


}




