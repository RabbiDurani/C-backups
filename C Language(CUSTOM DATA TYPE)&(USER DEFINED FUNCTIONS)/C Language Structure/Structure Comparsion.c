#include<stdio.h>

struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1 = {27,255000.91};
    struct person person2,person3;
    person2.age =33;
    person2.salary =30882.81;
    person3=person2;

    if(person1.age ==person2.age  && person1.salary==person2.salary)
        printf("person 1 equals to person 2");
    else
        printf("person 1 not equals to person 2");

        if(person2.age ==person3.age  && person2.salary==person3.salary)
        printf("\n person 2 equals to person 3");
    else
        printf("\n person 2 not equals to person 3");

getch();
}

