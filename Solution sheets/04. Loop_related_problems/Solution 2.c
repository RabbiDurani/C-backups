#include<stdio.h>
int main()
{
    int i,n,temp=1;


    printf("Enter any number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)

    {
        printf("%d,",temp);
        temp=temp+2;
    }
}
