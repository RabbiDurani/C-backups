#include<stdio.h>
int main()
{
   char str[]="Rabbi Durrani";

    printf("Non reversed string :%s\n",str);

   strrev(str);//Reversing a string using library function(strrev)

   printf("Reversed string :%s\n",str);


   //Reverse without Library file
   char str1[20]="Rabbi Durrani";
   char str2[20];
   int i=0,len=0,j;
   while(str1[i]!=0)
   {
       i++;
       len++;
   }
   for(j=0,i=len-1;i>=0;i--,j++)
   {
       str2[j] =str1[i];
   }
   str2[j]!='\0';
   printf("Non reversed string :%s\n",str1);
   printf("Reversed string :%s\n",str2);
}
