#include<stdio.h>
int main()
{
    int num[20],n,i,num2[20];

    printf("How many numbers:");
    scanf("%d",&n);

    printf("Enter numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);

    }
    printf("Array A :");
    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);

    }

    //reverse

   for(i=0; i<n; i++)
    {
        num2[i]=num[i];
    }
    printf("\nArray B :");
   for(i=n-1; i>=0; i--)
    {
        printf("%d ",num2[i]);
    }

}
