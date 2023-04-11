#include<stdio.h>
#include<string.h>
int sub(char str1[],char str2[])
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0; i<len1; i++)
    {
        for(int j=0; j<len2; j++)
        {
            if(str1[i]==str2[j])
            {
                len2--;
            }
        }
    }
     if(len2==0)
     {
        return 1;
     }
     else
     {
        return -1;
     }
}
int main()
{
    char str1[20],str2[20];
    printf("Enter str 1:");
    gets(str1);
    printf("Enter str 2:");
    gets(str2);
    int d=sub(str1,str2);
    if(d==1)
    {
        printf("%d",d);
    }
    else
    {
        printf("0");
    }

}
