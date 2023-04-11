#include<stdio.h>

int  result ()
{
    int i,sum=0,n;
    printf("Enter N :");
    scanf("%d",&n);
    int a[n];
    printf("Enter values :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum in Function :%d\n",sum);
    return sum;
}
int main()
{
 int c=result();
    printf("Sum in main :%d\n",c);
}
