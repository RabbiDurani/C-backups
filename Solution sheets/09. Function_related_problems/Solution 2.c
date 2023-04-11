#include<stdio.h>

void output(int  c)
{
    printf(" :");
    scanf("%d",&c);

    if(c==3)
    {
        printf("Value received from main: 3");
    }
    else if(c!=3)
        {
            printf("Value received from main: A");
        }
}
int main()
{
    int  c;
    output(c);
}
