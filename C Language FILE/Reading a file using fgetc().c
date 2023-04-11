#include<stdio.h>
int main()
{
    FILE *file;

    char ch;

    file =fopen(" fprintf .txt","r");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        //This loop is being used for taking characters from the mentioned file in the loop into the declared variable(ch)
        while(!feof(file))//Here (feof)stands as (file end of)
        {
            ch=fgetc(file);//in the declared variable all the values coming from from the loop will be stored.
            printf("%c",ch);
        }

        printf("File written successfully\n");
    }
    fclose(file);
}




