#include<stdio.h>
int main()
{
    char str1[30]="mom";
    char str2[30];
    int i=0,len=0,j;
    while(str1[i]!=0)
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j] =str1[i];
    }
    str2[j]!='\0';

    printf("Non reversed string :%s\n",str1);
    printf("Reversed string :%s\n",str2);

    int d = strcmp(str1,str2);//The library function (strcmp) is used to compare between strings

    if(d==0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
}
