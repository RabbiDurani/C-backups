#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=10,y=20;
    printf("Before Swapping 'X':%d\n",x);
    printf("Before Swapping 'Y':%d\n",y);

    swap(&x,&y);//the declared function will receive numbers from where the name of the function is declared in the main function

    printf("After  Swapping 'X':%d\n",x);
    printf("After Swapping 'Y':%d\n",y);

}
