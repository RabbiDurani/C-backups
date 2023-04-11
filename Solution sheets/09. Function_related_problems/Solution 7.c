#include<stdio.h>
void evenodd (void)
{
    int n,i;
    printf("Enter N: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      {
          printf("%d ",arr[i]);
      }
      else
      {
          arr[i+1];
      }
    }

}
int main()
{

    evenodd();
}
