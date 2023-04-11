#include<stdio.h>

//Global structure
struct person
{
    int age;
    float salary;
};



int main()
{
    struct person person1,person2;

    printf("Enter info for person 1\n");
    printf("Enter age = ");
    scanf("%d",&person1.age);

    printf("Enter salary =");
    scanf("%f",&person1.salary);

    printf("Person 1\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);


    printf("\n\nEnter info for person 2\n");
    printf("Enter age =");
    scanf("%d",&person2.age);

    printf("Enter salary =");
    scanf("%f",&person2.salary);

    printf("Person 2\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);
}

