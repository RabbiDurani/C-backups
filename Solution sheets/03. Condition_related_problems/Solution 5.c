#include <stdio.h>
int main()
{
    int num;
    int temp,flag;

    printf("Enter any number: ");
    scanf("%d",&num);

    temp=num;
    flag=0;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            flag=1;
            break;
        }
        temp=temp/2;
    }

    if(flag==0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
