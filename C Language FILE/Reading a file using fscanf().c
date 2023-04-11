#include<stdio.h>
int main()
{
    FILE *file;

    char fname[40];

    char lname[40];

    int age;

    file =fopen("fscanf.txt","r");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");

        //library file(file pointer,format specifier,variable name)
        fscanf(file,"%s %s %d",&fname,&lname,&age);

        printf("%s %s %d\n",fname,lname,age );
        printf("File written successfully\n");
    }
    fclose(file);
}

