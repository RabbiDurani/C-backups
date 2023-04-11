#include<stdio.h>
int main()
{
    int x=5,y=10;
    int *p;//The sign(*)refers to a variable declared as a pointer
    p=&x;//Using the sign(*&)refers to the pointer taking value from a predeclared variable
    printf("Value of x =%d\n",x);
    printf("Address of x =%d\n",&x);
    printf("Address of p =%d\n",p);
    printf("Content of p =%d\n",*p);//The sign(*) mentioned into a printf function for a pointer,makes printf to print the value mentioned into the pointer
    printf("Address of Pointer variable =%d\n",&p);
}
