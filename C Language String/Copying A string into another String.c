#include<stdio.h>
int main()
{
  //using library function (strcpy)
  char source[]="C Programing";
  char target[20];

  strcpy(target,source);

  printf("Source string =%s\n",source);
  printf("Target string =%s\n",target);


}
