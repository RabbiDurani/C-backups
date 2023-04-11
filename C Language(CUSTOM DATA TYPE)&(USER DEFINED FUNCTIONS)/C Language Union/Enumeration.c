#include<stdio.h>
//Enumeration is used for declaration & use of constant
enum days_of_weeks
{
    Sat,Sun,mon,Tue,Wed,Thu,Fri
};


int main()
{
    enum days_of_weeks day1,day2;

    day1 =Fri;
    day2 =Sun;
    int dif=day1-day2;
    printf("Diffrence :%d\n",dif);


    getch();
}
