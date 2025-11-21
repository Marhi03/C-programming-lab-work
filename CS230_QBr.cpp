#include <stdio.h>
#include <stdlib.h>
struct cricdata
{
    char name[10];
    int age;
    int testMatches;
    int avgruns;
};

int main()
{
    cricdata c[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter the information for player no. %d\n", i+1);
        printf("Name                        :");
        gets(c[i].name);
        fflush(stdin);
        printf("Age                         :");
        scanf("%d", &c[i].age);
        printf("No. of test matches played  :");
        scanf("%d", &c[i].testMatches);
        printf("Average runs in test matches:");
        scanf("%d", &c[i].avgruns);
        fflush(stdin);
    }
    void ascending(struct cricdata*);
    ascending(c);
}

void ascending(struct cricdata*a)
{
    struct cricdata temp;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(a[i].avgruns < a[j].avgruns)
            {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
            }

        }
    }
    printf("\nPlayers sorted in ascending order of their average runs:\n");
    for(int i=0; i<10; i++)
    {
        printf("Name                        :%s\n", a[i].name);
        printf("Age                         :%d\n", a[i].age);
        printf("No. of test matches played  :%d\n", a[i].testMatches);
        printf("Average runs in test matches:%d\n", a[i].avgruns);
    }
}
