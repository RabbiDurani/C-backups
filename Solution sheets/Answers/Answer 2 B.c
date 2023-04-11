#include<stdio.h>
void input_data(int goals[],int min[])
{

}
int count_of_hattricks(int goals [],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(goals[i]>=3)
        {
            count++;
        }
    }
    return count;

}
int main()
{
    int n,i;

    printf("Enter matches :");
    scanf("%d",&n);

    int goals[n],min[n];

    printf("Enter Goals :");

    for(i=0; i<n; i++)
    {
        scanf("%d",&goals[i]);
    }
    printf("Enter min :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&min[i]);
    }
    input_data(goals,min);
    int j = count_of_hattricks(goals,n);
    printf("Hattricks  :%d",j);
}
