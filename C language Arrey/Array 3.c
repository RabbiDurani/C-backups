//write a program that takes few numbers and identifies maximum
#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("How many numbers :");
    scanf("%d",&n);
    printf("Enter numbers :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int max= num[0];
    for(i=0; i<n; i++)
    {
        if(max<num[i])
            max=num[i];

    }
    printf("Maximum :%d\n",max);



     int num1[100],n1,i1;
    printf("How many numbers :");
    scanf("%d",&n1);
    printf("Enter numbers :");
    for(i1=0; i1<n1; i1++)
    {
        scanf("%d",&num1[i1]);
    }
    int min= num1[0];
    for(i1=0;i1<n1; i1++)
    {
        if(min>num1[i1])
            min=num1[i1];

    }
    printf("Minimum :%d\n",min);
}
