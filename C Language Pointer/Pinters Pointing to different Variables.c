#include<stdio.h>
int main()
{
    int x=5,y=10,z=25;
    int *p;
    p=&x;
    printf("Value of x =%d\n",*p);

    p=&y;
    printf("Value of y =%d\n",*p);

    p=&z;
    printf("Value of z =%d\n",*p);
}
