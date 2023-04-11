#include <stdio.h>
int main()
{

    int i,j,temp,n,num[30];
    printf("How many numbers :");
    scanf("%d", &n);

    printf("Enter the values :");
    for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);

    for (i = 0; i < n-1; i++)
    {

        for (j = 0; j < n-1-i; j++)
        {

            if (num[j] > num[j+1])
            {

                temp=  num[j];
                num[j] = num[j+1];
                num[j+1] = temp;

            }

        }

    }

    printf("Arranged array :");
    for (i = 0; i < n; i++)
        printf("%d ", num[i]);

}
