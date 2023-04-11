#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two values=");
    scanf("%d %d",&x,&y);
    if(x>y)
        printf("The maximum value is=%d \n",x);
    else
        printf("The maximum value is= %d\n",y);
}
