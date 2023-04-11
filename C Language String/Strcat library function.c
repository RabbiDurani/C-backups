#include<stdio.h>
int main()
{
    char str[] ="My name is ";


    char str1[] ="Rabbi durrani";
    strcat(str,str1);//(strcat)= this library function is used to print a string after another string

    printf("str =%s\n",str);
    printf("str1 =%s\n",str1);

//also can'be done by this

    char str2[] ="My name is ";

    strcat(str2,"Rabbi durrani");//(strcat)= this library function is used to print a string after another string

    printf("str2 =%s\n",str2);

//Doing the same thing with out using library function
    char str3[50]="My name is ";
    char str4[]="Rabbi Durrani";
    int i=0,len=0,j=0;
    while(str3[i]!='\0')
    {
        i++;
        len++;
    }
    while(str4[j]!='\0')
    {
        str3[len+j]=str4[j];
        j++;
    }
    printf("str3 =%s\n",str3);
}
