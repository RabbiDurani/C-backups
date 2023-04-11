#include<stdio.h>

//Global structure
struct person
{
    int age;
    float salary;
};



int main()
{
    //Direct initialization
    struct person person1= {24,26677.56};

    struct person person2,person3;

    //Element wise assignment
    person2.age=25;
    person2.salary=30667.56;

    //Structure variable assignment

    person3=person2;//declaring value or person2 into person3

    printf("Person 1\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);



    printf("\nPerson 2\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);



    printf("\nPerson 3\n");
    printf("Age =%d\n",person3.age);
    printf("Salary =%.2f\n",person3.salary);
}

