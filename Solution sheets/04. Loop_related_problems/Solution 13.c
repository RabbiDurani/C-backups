#include<stdio.h>

int factorial(int x)
{
    int fact =1,j;
    for(j=1;j<=x;j++)
    {
        fact=fact*j;
    }
    return(fact);
}
int main()
{
    int n,r,ncr;

    printf("Enter n & r :");
    scanf("%d %d",&n,&r);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
}
