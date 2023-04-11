#include<stdio.h>

//Return type > function name >(Arguments) format of a function

int          sum          (int a,int b,int c)
{
    return a+b+c;//return is a keyword here,is used to return the value where the function is called

}

    int main()//program always starts from  the main function
    {
        int result = sum(5,6,7);

        printf("The sum is :%d\n",result);

        result =sum(5,10,11);

        printf("The Sum is:%d\n",result);

         result =sum(5,10,15);

        printf("The Sum is:%d\n",result);

    }

