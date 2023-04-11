#include<stdio.h>
int main()
{
    int i,j,n,mid,a,b,q,r;

    printf("Enter N :");
    scanf("%d",&n);

    mid=(n+1)/2;
    a=mid-1;
    b=mid+1;
    q=2;
    r=n-1;
    for(i=1; i<=mid; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==mid)
            {
                printf("$");
            }
            else if(i>1 && j==a || i>1 && j==b)
            {
                printf("$");
            }
            else if(i==mid)
            {
                printf("$");
            }
            else
            {
                printf("-");
            }
        }

        if(i>1)
        {
            a--;
            b++;
        }
        printf("\n");
    }

    for(i=1; i<=mid-1; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==mid)
            {
                printf("$");
            }
            else if(i>=1 && j==q ||i>=1 && j==r)
            {
                printf("$");
            }
            else
            {
                printf("-");
            }
        }
        q++;
        r--;
        printf("\n");
    }
}
