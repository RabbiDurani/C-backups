#include<stdio.h>
int main()
{
   int num,temp,r,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(num=sum)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");


 int initialnum,finalnum,temp1,r1,sum1=0,i1;
    printf("Enter Initial value : ");
    scanf("%d",&initialnum);
    printf("Enter Final value : ");
    scanf("%d",&finalnum);
    for(i1=initialnum;i1<=finalnum;i1++){

    temp1=i1;

    while(temp1!=0)
    {
        r1=temp1%10;
        sum1=sum1+r1*r1*r1;
        temp1=temp1/10;
    }
    if(sum1==i1){
         printf("%d ",i1);
    }

sum1=0;
}
}



