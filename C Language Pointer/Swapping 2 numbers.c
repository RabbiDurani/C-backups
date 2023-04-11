#include<stdio.h>
int main()
{
    int x=10,y=20,temp;
    int *pnt1,*pnt2;
    pnt1=&x,pnt2=&y;
    //swapping
    temp=*pnt1;
    *pnt1=*pnt2;
    *pnt2=temp;
    printf("Value of X after swapping :%d\n",x);

    printf("Value of X after swapping :%d",y);

}
