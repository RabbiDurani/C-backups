#include<stdio.h>
int main()
{
  char ch;
  int  i;
  for(i=1; ;i++)
  {
   scanf("%c",&ch);
   if(ch!='A')
   {
    printf("Input %d:%c",i,ch);
    printf("\n");
   }
   else
   {
       return 0;
   }

  }
}

