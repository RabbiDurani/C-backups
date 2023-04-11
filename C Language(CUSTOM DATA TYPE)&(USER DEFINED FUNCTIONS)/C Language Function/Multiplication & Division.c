#include<stdio.h>

void multi (int a,int b)
{
    printf("The multiplication is :%d\n",a*b);
}
void div (int a,int b)
{
    printf("The division is :%d\n",a/b);
}
int main()
{
 multi (12,12);
 multi (33,11);
 div   (56,8);
 div    (81,9);
}
