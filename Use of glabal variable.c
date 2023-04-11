#include<stdio.h>
int a=10;//to declare a global variable the variable is declared here.
int main()
{
    printf("Inside the main function a=%d\n",a);
    display();
}
void display()
{
 printf("Inside the display function a=%d\n",a);
}
