#include<stdio.h>
int sort (int a[],int n)
{
    int i,j,temp;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
        int i,n;
        printf("Enter N :");
        scanf("%d",&n);
        int a[n];
        printf("Enter values :");
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
}
