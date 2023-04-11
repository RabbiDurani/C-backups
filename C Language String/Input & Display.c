#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter your full name : ");
    gets(s1);//gets function is used because scanf can't read input after space

    printf("Full name :%s\n",s1);

}
