#include <stdbool.h>
#include <stdio.h>
bool Prime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }
    for(int i=2; i<n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n,count=0,d;
    printf("Enter number :");
    scanf("%d",&n);
    for (int i=1; count<n; i++)
    {
        if (Prime(i))
        {
            count++;
        }
        d=i;
    }
    printf("%dth Prime number :%d",n,d);
}
