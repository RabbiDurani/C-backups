#include<stdio.h>
int main()
{
    FILE *file;

    char name[100];

    int age;

    file =fopen(" fprintf .txt","a");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter your name :");

        gets(name);

        printf("Enter your age :");

        scanf("%d",&age);


     //library file (file pointer ,format specifier,variable)(format to declare/initialize The library function( fprintf ))
         fprintf    (file       ,"Name=%s Age=%d\n",name,age);//The library function( fprintf )is used for storing data in a file

        printf("File written successfully\n");
    }
    fclose(file);
}

