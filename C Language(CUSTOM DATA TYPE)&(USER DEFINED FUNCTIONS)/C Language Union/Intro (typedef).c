#include<stdio.h>

struct book
{
    char name[30];
    int price;
} ;


int main()
{
    typedef char LETTER;//the function is use to change the name of primitive builtin datatype
    LETTER ch;
    ch ='A';
    printf("ch =%c\n",ch);
    LETTER ch1;
    ch1='B';
    printf("ch1 =%c\n",ch1);



    typedef struct book Book;
    Book n ={"The Lord of the Rings",350};
    printf("Book Name =%s\n",n.name);
    printf("Book Name =%d\n",n.price);
}

