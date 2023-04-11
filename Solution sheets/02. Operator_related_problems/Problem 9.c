#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    printf("Enter value for A & B & C=");
    scanf("%d %d %d",&a,&b,&c);
    x=a-b/3+c*2-1;
    y=a-(b/(3+c)*2)-1;
    z=a-((b/3)+c*2)-1;
    printf("The value for X=%d\n",x);
    printf("The value for Y=%d\n",y);
    printf("The value for Z=%d\n",z);
    //this program is totally correct)
}
