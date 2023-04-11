#include<stdio.h>
int main()
{
    char str[15] = "Bangladesh";
    char str1[15]= "Pakistan";


    printf("Before swapping\n");
    printf("String 1 :%s\n",str);
    printf("String 2 :%s\n",str1);


    char temp[15];

    strcpy(temp,str);

    strcpy(str,str1);

    strcpy(str1,temp);


    printf("After swapping\n");
    printf("String 1 :%s\n",str);
    printf("String 2 :%s\n",str1);
}
