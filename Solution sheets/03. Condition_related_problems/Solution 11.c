#include<stdio.h>
int main()
{
    int i;

    printf("Enter is=");
    scanf("%d",&i);

    if(i>100 || i<0)
        printf("Invalid number");

    else if(i>=90 && i<=100)
        printf("Grade=A");

    else if(i>=86 && i<=89)
        printf("Grade=A-");

    else if(i>=82 && i<=85)
        printf("Grade=B+");

    else if(i>=78 && i<=81)
        printf("Grade=B");

    else if(i>=74 && i<=77)
        printf("Grade=B-");

    else if(i>=70 && i<=73)
        printf("Grade=C+");

    else if(i>=66 && i<=69)
        printf("Grade=C");

    else if(i>=62 && i<=65)
        printf("Grade=C-");

    else if(i>=58 && i<=61)
        printf("Grade=D+");

    else if(i>=55 && i<=57)
        printf("Grade=D");

    else if(i<55)
        printf("F");
}

