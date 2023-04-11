#include<stdio.h>
int main()
{
    int i,n,sum,result;

    printf("Enter n:");
    scanf("%d",&n);


    if(n%2==0)
    {
        result =(n/2)*(-1);
        printf("Result :%d\n",result);
    }
   else
   {
       sum=(n+1)/2;
       printf("Result :%d\n",sum);
   }
}
