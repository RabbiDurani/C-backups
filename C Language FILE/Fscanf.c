#include<stdio.h>
int main()
{
    FILE *file;   //To declare a  file- fist there should be a declaration of name (FILE)in capital letter,secondly declaration of a pointer (which will'be the name of the File)

    file = fopen("fscanf.txt","w");//The library function (fopen) is used for opening a file & in the second bracket first need to declare Name of the file,second need to declare Mode of the file

    if(file ==NULL)
    {
        printf("File dosen't exists");
    }
    else
    {
        printf("File is opened");

        fclose(file);//The library function(fclose)is used for closing a existing file after working on it
    }
}
