#include<stdio.h>

int max(int x[])
{
    int i,max=x[0];;
    for(i=0;i<5;i++)
    {
        if(max < x[i])
            max=x[i];
    }
   return max;
}
int main()
{
    int num [] ={10,20,30,40,50};
   int  maximum = max(num);

     printf("Maximum :%d\n",maximum);
}
