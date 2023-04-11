#include<stdio.h>
int main()
{
    int mark;
    printf("Enter Marks=");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
        printf("Invalid number");
    else if(mark>=80 && mark<100)
        printf("Grade=A+");
    else if(mark>=70 && mark<79)
        printf("Grade=A");
    else if(mark>=60 && mark<69)
        printf("Grade=A-");
    else if(mark>=50 && mark<59)
        printf("Grade=B");
    else if(mark>=40 && mark<49)
        printf("Grade=C");
    else if(mark>=33 && mark<39)
        printf("Grade=D");
    else
        printf("F");
}
