#include<stdio.h>
int main()
{
    float n,sum=0,i=1,num;

    printf("Enter n:");
    scanf("%f",&n);

    while(i<=n)
    {
        printf("Enter numbers :");
        scanf("%f",&num);
        sum=sum+num;
        i++;
    }

    printf("\nAverage of %.f inputs = %f\n",n,sum/n);
}
