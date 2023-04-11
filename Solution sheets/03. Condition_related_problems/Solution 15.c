#include<stdio.h>
int main()
{
    int x,n1,n2,n3,n=3,flag;
    printf("Player 1 pick a number :");
    scanf("%d",&x);

    flag=0;
    printf(" :");
    scanf("%d",&n1);
    if(x==n1)
    {
        printf("Right player-2 Wins\n");
        return 0;
    }
    else
    {
          printf("Wrong %d chances left !\n",n-1);
    }


    flag=1;
    printf (" :");
    scanf("%d",&n2);
    if(x==n2)
    {
        printf("Right player-2 Wins\n");
        return 0;
    }
    else
    {
        printf("Wrong %d chances left !\n",n-2);
    }


    flag=1;
    printf (" :");
    scanf("%d",&n3);
    if(x==n3)
    {
        printf("Right player-2 Wins\n");
        return 0;
    }
    else
    {
         printf("Wrong %d chances left !\n",n-3);
    }
       return 0;
}

