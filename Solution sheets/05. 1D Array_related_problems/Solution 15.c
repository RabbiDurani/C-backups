#include<stdio.h>
int main()
{
    int i,j,n,m,a[10],b[10],flag;

    printf("Enter N for Array 1 :");
    scanf("%d",&n);
    printf("Enter values :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter N for Array 2 :");
    scanf("%d",&m);
    printf("Enter values :");
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<n; i++)
    {
         printf("%d ",a[i]);
    }
    for(i=0; i<m; i++)
    {
        flag =1;
        for(j=0; j<n; j++)
        {
            if(b[i]==a[j])
            {
                flag=0;
                break;
            }
        }
         if(flag==1)
         {
             printf("%d ",b[i]);
         }
    }

}
