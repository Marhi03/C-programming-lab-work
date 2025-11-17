#include <stdio.h>
int main()
{
    int a;
    void leapyear(int);
    printf("Enter the year:\n");
    scanf("%d", &a);
    leapyear(a);
}

void leapyear(int x)
{
    if(x%4 == 0)
    {
        if(x%100 != 0)
        {printf("%d is a leap year.\n", x);}
        else
        printf("%d is not a leap year.\n", x);
    }
}

