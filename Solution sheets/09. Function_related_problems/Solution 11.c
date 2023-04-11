#include<stdio.h>
void prime(int a)
{
    int count=0;
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
            count++;
            break;
        }
    }
     if (a ==1)
    {
        printf("Not prime");
    }
     else if(count==0)
    {
        printf("Prime");

    }
    else
    {
        printf("Not prime");
    }

}
int main()
{
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    prime(num);
}
