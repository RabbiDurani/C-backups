#include<stdio.h>

//Global structure
struct person
{
    int age;
    float salary;
};

 struct person person1,person2;//Global variable (person1,person2)

int main()
{
    //Local structure
        struct person
    {
        int age;
        float salary;
    };



   // struct person person1,person2;//local variable (person1,person2)
    person1.age =25;
    person1.salary =  12700.50;
    printf("Person 1\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%f\n",person1.salary);


    person2.age =34;
    person2.salary =  54700.50;
    printf("Person 2\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%f\n",person2.salary);
}
