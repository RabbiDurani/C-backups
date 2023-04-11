#include<stdio.h>
int main()
{
    FILE *file1;
    char name[100];
    file1 =fopen("fputs.txt","a");

    if(file1==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your university name :");
        gets(name);
        fputs(name,file1);
        fputs("\n",file1);//this line is used for printing a new line after taking input every time
        printf("File written successfully\n");
    }
    fclose(file1);
}
