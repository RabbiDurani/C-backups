#include<stdio.h>
int main()
{
    int num,temp,flag;

    printf("Enter a number :");
    scanf("%d",&num);

    if(num==0)
        printf("Zero is not a valid input");
    else if(num<0)
        printf("Negative input is not valid");



    else if(num>0)
    {
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
    }
}
