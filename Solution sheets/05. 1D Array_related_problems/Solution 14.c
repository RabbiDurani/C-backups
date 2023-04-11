#include<stdio.h>
int main()
{
    int i,j,n,m,k,l,a[10],b[10],c[10];

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

    int flag=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
               printf("%d ",a[i]);
               flag++;
            }
        }
    }
    if(flag==0)
    {
        printf("Empty set");
    }

}
