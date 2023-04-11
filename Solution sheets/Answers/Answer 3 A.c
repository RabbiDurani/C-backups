#include<stdio.h>
int main()
{
    char c[100];
    printf("Input :");
    gets(c);
    int i=0,flag;
    while(c[i]!='\0');
    {
        flag=1;
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||
           c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
        {
            printf("%c",c[i]);
            flag=0;
            break;
        }

    }
}

