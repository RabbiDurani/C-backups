
#include<stdio.h>
int main()
{
    //Identifying vowel and consonant
    /* char ch;
     printf("Enter any character=");
     scanf("%ch",&ch);
     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')//Using Logical '||' (OR)
     printf("Vowel");
         else
         printf("Consonant");*/
    //Identifying the large number between 3 numbers
    int num1,num2,num3;
    printf("Enter three numbers=");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
        printf("The Large number is=%d\n",num1);
    else if(num2>num1 && num2>num3)
        printf("The Large number is=%d\n",num2);
    else if(num3>num1 && num3>num2)
        printf("The Large number is=%d\n",num3);
    else
        printf("Numbers are equal\n");

}
