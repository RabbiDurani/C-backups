#include<stdio.h>

int main()
{
    char s1[]="Rakibul Islam Rabbi";

    int len=strlen(s1);//(strlen) is a library function,is used to display String length

    printf("Length = %d\n",len);


    char s2[]="Rakibul Islam Rabbi";

    int i=0,len1=0;

    while(s2[i]!='\0')
    {
        i++;
        len1++;
    }
    printf("Length = %d\n",len1);
}
