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
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    printf("Prime less than %d:",n);
    for (int i=1; i<=n-1; i++)
    {
        if (Prime(i))
        {
            printf("%d,",i);
        }
    }
}
