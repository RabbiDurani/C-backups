#include<stdio.h>

struct person
{
    int age;
    float salary;

};
int main()
{
    struct person person[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter information for person %d\n",i+1);



        printf("Enter Age :");
        scanf("%d",&person[i].age);

        printf("Enter Salary :");
        scanf("%f",&person[i].salary);
    }

    for(i=0; i<3; i++)
    {
        printf("\n\nInformation of person %d\n",i+1);



        printf("Age :%d\n",person[i].age);

        printf("Salary :%.2f\n",person[i].salary);

    }

}
