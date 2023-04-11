#include<stdio.h>
int strlen (char c[])
{
    int i;
    i=0;
    while(c[i])
        i++;
    return (i);
}
int sub(char str1[],char str2[],int d,int e)
{
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<e; j++)
        {
            if(str1[i]==str2[j])
            {
                e--;
            }
        }
    }
    if(e==0)
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
    char a[20],b[20];
    printf("Enter String 1 :");
    scanf("%s",&a);
    printf("Enter String 1 :");
    scanf("%s",&b);

    int d=strlen(a);
    int e=strlen(b);
    int f=sub(a,b,d,e);
    if(f==1)
    {
        printf("%d",f);
    }
    else
    {
        printf("0");
    }

}
