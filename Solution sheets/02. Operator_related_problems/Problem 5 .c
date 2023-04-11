#include<stdio.h>
int main()
{
    int x,y,inc,dec,temp;
    printf("Enter value for X & Y=");
    scanf("%d %d",&x,&y);
    temp=x;
    inc=x+=y;
    dec=temp-=y;
    printf("Incremented value =%d\n",inc);
    printf("decremented value=%d\n",dec);

}
