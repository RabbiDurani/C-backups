#include<stdio.h>
#include<math.h>
void stddiv(int arr[],int n)
{
    float sum=0,avg,dif;
    float sum1=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;

     for(int i=0;i<n;i++)
     {
         dif=arr[i]-avg;
         dif=dif*dif;
         sum1=sum1+dif;
     }

     sum1=sum1/n;
     float result= (sqrt(sum1));
     printf("%.2f",result);
}
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    stddiv(arr,n);
}
