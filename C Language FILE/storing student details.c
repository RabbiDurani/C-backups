#include<stdio.h>
int main()
{
    FILE *file;

    char name[20];
    int age,numofstu,i,phone;

    file =fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter number of students :");
        scanf("%d",&numofstu);

        for(i=1;i<=numofstu;i++)
        {
            printf("Enter students name :");
            scanf("%s",&name);

            printf("Enter students age :");
            scanf("%d",&age);


            printf("Enter students phone number :");
            scanf("%d",&phone);

            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phone);

        }
        fclose(file);


    }

}
