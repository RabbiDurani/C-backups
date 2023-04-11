#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter N :");
    scanf("%d",&n);
    int arr[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i%2!=0)
            {
                sum=sum+arr[i][j];
            }
            else if(i%2==0 && j%2!=0)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}
