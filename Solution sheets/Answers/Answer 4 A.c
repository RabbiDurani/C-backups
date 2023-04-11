#include<stdio.h>

struct player
{
    int wickets,matches,runs;
    float average;
    char name[30],country[15];
};
int main()
{
    struct player player[100];
    int n=100,i,max;
    for(i=0; i<n; i++)
    {
        printf("Enter wickets for player %d :",i+1);
        scanf("%d",&player[i].wickets);

        printf("Enter matches for player %d :",i+1);
        scanf("%d",&player[i].matches);

        printf("Enter runs conceded by player %d :",i+1);
        scanf("%d",&player[i].runs);

        printf("Enter name of player %d :",i+1);
        fflush(stdin);
        gets(player[i].name);

        printf("Enter country of player %d :",i+1);
        fflush(stdin);
        gets(player[i].country);
        player[i].average=player[i].runs/player[i].wickets;
        printf("\n%.2f\n",player[i].average);
    }


    max=player[0].average;
    for(i=0; i<n; i++)
    {
        if(max < player[i].average)
        {
            max=i;
        }
    }
    printf("Information of the player with maximum average : %s\n",player[max].name);
    printf("%s\t",player[max].country);
    printf("%d\t",player[max].wickets);
    printf("%d\t",player[max].matches);
    printf("%d\t",player[max].runs);
    printf("%.2f",player[max].average);

}


