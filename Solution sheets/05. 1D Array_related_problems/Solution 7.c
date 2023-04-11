#include<stdio.h>
int main()
{
    char a[30];
    int i,l,count=0;

    printf("Enter length :");
    scanf("%d",&l);

    printf("Enter text :");
    for(i=0; i<=l; i++)
    {
        scanf("%ch",&a[i]);
    }
    for(i=0; i<=l; i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||
           a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            count++;
    }
    printf("count:%d",count);

}
