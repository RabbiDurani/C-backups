#include<stdio.h>
int main()
{
    float a,hw,ct,mt,tf;
    int n,b=1;
    printf("Number of students :");
    scanf("%d",&n);

    while(n!=0)
    {
        printf("Attendance for student %d :",b);
        scanf("%f",&a);
        a=(a*5)/5;

        printf("Assignments for student %d :",b);
        scanf("%f",&hw);
        hw=(hw*10)/10;


        printf("Class tests for student %d :",b);
        scanf("%f",&ct);
        ct=(ct*15)/15;


        printf("Midterm for student %d :",b);
        scanf("%f",&mt);
        mt=(mt*30)/50;

        printf("Final term for student %d :",b);
        scanf("%f",&tf);
        tf=(tf*40)/100;


        int sum=(a+hw+ct+mt+tf);


        if(sum>=90 && sum<=100)
            printf("Student %d:A\n",b);

        else if(sum>=86 && sum<=89)
            printf("Student %d:A-\n",b);

        else if(sum>=82 && sum<=85)
            printf("Student %d:B+\n",b);

        else if(sum>=78 && sum<=81)
            printf("Student %d:B\n",b);

        else if(sum>=74 && sum<=77)
            printf("Student %d:B-\n",b);

        else if(sum>=70 && sum<=73)
            printf("Student %d:C+\n",b);

        else if(sum>=66 && sum<=69)
            printf("Student %d:C\n",b);

        else if(sum>=62 && sum<=65)
            printf("Student %d:C-\n",b);

        else if(sum>=58 && sum<=61)
            printf("Student %d:D+\n",b);

        else if(sum>=55 && sum<=57)
            printf("Student %d:D\n",b);

        else if(sum<55)
            printf("F\n",n);
        n--;
        b++;
    }
}
