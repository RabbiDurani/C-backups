#include<stdio.h>
int main()
{
    int n,i,num[100],dig;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("Enter values:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    printf("What are you searching for :");
    scanf("%d",&dig);

    int flag=0;
    for(i=0; i<n; i++)
    {
        if(dig==num[i])
        {
          printf("%d,",i);
          flag++;
        }

    }
    if(flag==0 )
    {
        printf("NOT FOUND");
    }
}

