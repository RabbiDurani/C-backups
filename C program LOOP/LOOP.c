//LOOP-for,while,do while
#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)//For (initialization;condition;counter update)
    {
        printf("C programing\n");
        printf("%d\n",i);
    }
    int i1=1;
    while(i1<=10)
    {
        printf("%d\n",i1);
        i1++;
    }
    int i2=1;//Initialization
    do
    {
        printf("%d\n",i2);
        i2++;//Increment
    }while (i2<=10);//Condition


}

