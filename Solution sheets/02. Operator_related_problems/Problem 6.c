#include<stdio.h>
int main()
{
  int  x,y,multi,divi,temp;
  printf("Enter value for X & Y=");
  scanf("%d %d",&x,&y);
  temp=x;
  multi=x*=y;
  divi=temp/=y;
  printf("Multiplication value is=%d\n",multi);
  printf("Divisional value is=%d\n",divi);
}
