#include<stdio.h>
void multi (int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=a[i]*2;
        printf("%d ",a[i]);
    }
}
int main()
{
    int n,i;
    printf("Enter N :");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter values :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    multi(a,n);
}
