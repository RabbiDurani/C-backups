#include<stdio.h>
int main()
{
    int array1[10],array2[10],i,n;
    printf("How many numbers :");
    scanf("%d",&n);
    printf("Enter numbers :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Array 1 :");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray 2 :");
    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }
}
