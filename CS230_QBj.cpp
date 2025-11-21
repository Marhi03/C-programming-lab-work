#include <stdio.h>
int main()
{
    void eligible(int*);
    int a[10], i;
    printf("Enter the age of 10 people.\n");
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    eligible(&a[0]);
}

void eligible(int*x)
{
    for(int i=0; i<10; i++)
    {
        if(*x>=18)
            {printf("You are eligible for voting.\n");}
        else
            printf("You are not eligible for voting.\n");
        x++;
    }
}
