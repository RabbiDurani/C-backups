//File is used for store data inputed by user,which was used for a certain program
/*FILE OPENING MODES:
r - open a file in read mode.
w - opens or create a text file in write mode.
a - opens a file in append mode.
r+ - opens a file in both read and write mode.
a+ - opens a file in both read and write mode.
w+ - opens a file in both read and write mode.*/
#include<stdio.h>
int main()
{
    FILE *file;   //To declare a  file- fist there should be a declaration of name (FILE)in capital letter,secondly declaration of a pointer (which will'be the name of the File)

    file = fopen("intro.txt","w");//The library function (fopen) is used for opening a file & in the second bracket first need to declare Name of the file,second need to declare Mode of the file

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
