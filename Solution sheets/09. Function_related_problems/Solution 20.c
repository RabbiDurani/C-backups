#include<stdio.h>
void binary (int n)
{
    int rem,i=0,arr[10];
    while(n)
    {
        rem=n%2;
        n=n/2;
        arr[i]=rem;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        printf("%d",arr[j]);
    }
}

void octal (int n)
{
    int oct=0,rem=0,place=1;
    while(n)
    {
        rem=n%8;
        oct=oct+rem*place;
        n=n/8;
        place=place*10;
    }
    printf("%d",oct);
}

void hexa (int n)
{
    int i=1,rem,j;
    char arr[50];
    int temp=n;
    while(temp!=0)
    {
        rem=temp%16;
        if(rem<10)
            rem=rem+48;
        else
            rem=rem+55;
        arr[i++]=rem;
        temp=temp/16;
    }
    for(j=i-1; j>0; j--)
    {
        printf("%c",arr[j]);
    }
}

int main()
{
    int n,b;
    printf("Enter N & B :");
    scanf("%d %d",&n,&b);
    if(b<2 || b>16)
    {
        printf("Base not within proper range!");
    }

    else if(b==2)
    {
        binary(n);
    }
    else if(b==8)
    {
        octal(n);
    }
    else if(b==16)
    {
        hexa(n);
    }

}
