#include<stdio.h>
int main()
{
    int num[100],n,i,pos=-1,value;

    printf("How many numbers :");
    scanf("%d",&n);

    printf("Enter numbers :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int max= num[0];

    for(i=0; i<n; i++)
    {
        if(max<num[i])
            max=num[i];

    }
    printf("Max:%d",max);

    value=max;

    for(i=0; i<n; i++)
    {
        if(value==num[i])
        {
            pos=i;
            break;
        }

    }
    if(pos==-1)
    {
        printf("Error");
    }
    else
    {
        printf(" ,Index:%d",pos);
    }

}
