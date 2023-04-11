#include<stdio.h>
int main()
{
    int x,n,y;

    printf("Enter X :");
    scanf("%d",&x);

    printf("Enter N :");
    scanf("%d",&n);

    while(n!=0)
    {

    printf("Enter Y :");
    scanf("%d",&y);

        if(x==y)
        {
            printf("Right, Player-2 wins!");
            break;
        }
         if(x!=y)
         {
              printf("Wrong, %d Choice(s) Left!\n",n-1);
         }
             n--;
    }
    if(n==0)
     printf("Player-1 wins!");
}
