#include<stdio.h>
int main()
{
    int x,y,pow=1,i;
    printf("Enter X & Y :");

    scanf("%d %d",&x,&y);

    for(i=1; i<=y; i++)
    {
        pow=pow*x;
    }
    printf("%d",pow);
}

