#include<stdio.h>
int main()
{
    int i,k,n;

    printf("Enter N :");
    scanf("%d",&n);

    int c=n;
    for(i=0;i<n;i++)
    {
      for(k=i+1;k<=c;k++)
      {
          printf("%d",k);
      }
      c++;
      printf("\n");

    }


}


