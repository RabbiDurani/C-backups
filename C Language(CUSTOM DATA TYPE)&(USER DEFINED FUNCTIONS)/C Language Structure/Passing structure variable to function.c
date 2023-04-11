#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};
void display (struct person p)
{
    printf("\nName :%s\n",p.name);
     printf("Age :%d\n",p.age);
      printf("Salary :%.2f\n",p.salary);
}
int main()
{
  struct person person1,person2;
  strcpy(person1.name,"Rabbi Durrani");//To keep the string in the declared array  can't direct initialize it.So need to use (strcpy) function
  person1.age =24;
  person1.salary =56000.34;

  display(person1);

  strcpy(person2.name,"Riad Durrani");
  person2.age =19;
  person2.salary =34000.34;

  display(person2);

}
