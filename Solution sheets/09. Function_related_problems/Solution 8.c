#include<stdio.h>
int minimum (int a[], int n)
{
    int min=a[0];
    for(int i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}
int main()
{
    int n,i,j;
    printf("Enter N :");
    scanf("%d",&n);
     int a[n];
     printf("Enter values :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=minimum(a,n);
    printf("%d",min);
}
