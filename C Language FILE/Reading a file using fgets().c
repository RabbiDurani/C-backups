#include<stdio.h>
int main()
{
    FILE *file;

    char ch[40];

    file =fopen(" fprintf .txt","r");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");

        while(!feof(file))
        {
        //library file(variable,size,file pointer)
            fgets(ch,35,file);

            printf("%s\n",ch);
        }

        printf("File written successfully\n");
    }
    fclose(file);
}
