#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter x & y :");
    scanf("%d %d",&x,&y);

    if(x<y)
    {
        while(x*x!=y*y)
        {
            printf("%d,",x*x);
            x++;
        }
        printf("Reached!");
    }
    else if(x>y)
    {
        while(x*x!=y*y)
        {
            printf("%d,",x*x);
            x--;
        }
        printf("Reached!");
    }
    else if(x==y)

        printf("Reached!");
}
