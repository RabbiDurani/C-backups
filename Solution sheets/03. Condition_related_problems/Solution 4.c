#include<stdio.h>
int main()
{
    int ang1,ang2,ang3,sum;

    printf("Enter angles :");

    scanf("%d %d %d",&ang1,&ang2,&ang3);

    sum=(ang1+ang2+ang3);

    if(0<ang1<180 && 0<ang2<180 && 0<ang3<180 && sum==180)

        printf("Yes");

    else

        printf("No");


}
