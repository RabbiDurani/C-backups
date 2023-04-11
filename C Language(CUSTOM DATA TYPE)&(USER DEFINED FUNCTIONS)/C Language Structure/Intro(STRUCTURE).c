//Structure is a collection of variables of different data types under a single name
#include<stdio.h>
//The structure created or declared outside the main function is known as Global structure.Because it can'be called by any function from any where
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;
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

