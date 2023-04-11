#include<stdio.h>
int main()
{

    /*char lower,upper;
    printf("Enter any lowercase letter= ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("Uppercase letter =%c",upper);
    return 0;*/

    char lower,upper;
    printf("Enter any uppercase letter= ");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("Lowercase letter =%c",lower);
    return 0;
}
