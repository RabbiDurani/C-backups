#include<stdio.h>
void exc(int *a,int *b)
{
    printf("Value in Function :%d %d\n",*a,*b);
}
int main()
{
    int x,y;
    printf("Enter x & y :");
    scanf("%d %d",&x,&y);
    exc(&y,&x);
    printf("Value in Main :%d %d",y,x);
}
