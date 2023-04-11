#include<stdio.h>
int main()
{
    int Array1[20],n,i,l,Array2[20],temp[20];

    printf("How many numbers:");
    scanf("%d",&n);

    printf("Enter numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&Array1[i]);
    }

    printf("How many numbers:");
    scanf("%d",&l);

    printf("Enter numbers:");
    for(i=0; i<l; i++)
    {
        scanf("%d",&Array2[i]);

    }

    for(i=0; i<n; i++)
    {
        temp[i]=Array1[i];
        Array1[i]=Array2[i];
        Array2[i]=temp[i];
    }


    printf("\nArray 1  :");
    for(i=0; i<l; i++)
    {
        printf("%d ",Array1[i]);
    }

    printf("\nArray 2  :");
    for(i=0; i<n; i++)
    {
        printf("%d ",Array2[i]);
    }

}
