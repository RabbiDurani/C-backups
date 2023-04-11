#include<stdio.h>
int main()

{
    FILE *file;
    char name[30]="Bilkis Begum";
    int length=strlen(name);
    int i;

    file = fopen("fputc.txt","w");
    if(file ==NULL)
    {
        printf("File dosen't exists");
    }
    else
    {
        printf("File is opened\n");
        for(i=0;i<length;i++)
        {
          fputc(name[i],file);//The library function(fputc)is used for making program to store data type input in the file name mentioned in the library function(fopen)
        }
        printf("File is written successfully");
        fclose(file);
    }
}

