#include<stdio.h>
int main()
{
    FILE *file;
    file =fopen("numbers.txt","r");
    int num[9],i=0;

    for(i=0;i<9;i++)
       {
           fscanf(file,"%d",&num[i]);
       }

   float median=(num[4]+num[5])/2.0;

   printf("%.2f",median);
}
