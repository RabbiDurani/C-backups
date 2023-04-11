#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter N :");
    scanf("%d",&n);
    int arr[n][n];
    int m=(n/2);
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
            if(i==m || i>0 &&j==m)
            {
                sum=sum+arr[i][j];
            }
             else if(i==0 && j<=m || i<m && j==n-1)
            {
                sum=sum+arr[i][j];
            }
            else if(i>m && j==0 || i==n-1 && j>=m)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}
