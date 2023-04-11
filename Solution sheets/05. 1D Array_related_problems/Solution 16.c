#include<stdio.h>
int main()
{
    int a[20],b[20],i,j,n,m,q,flag;

    printf("How many numbers :");
    scanf("%d",&n);

    printf("Enter values :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("How many numbers :");
    scanf("%d",&m);

    printf("Enter values :");
    for(j=0; j<m; j++)
    {
        scanf("%d",&b[j]);
    }

    for(i=0; i<n; i++)
    {
        flag=1;
        for(j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",a[i]);
        }
    }
}
