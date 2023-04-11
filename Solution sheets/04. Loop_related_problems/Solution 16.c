#include<stdio.h>
int main()
{
    int num,count=0,i;

    printf("Enter number:");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if (num ==1)
    printf("Not prime");
    else if(count==0)
        printf("Prime");

    else
        printf("Not prime");
}
