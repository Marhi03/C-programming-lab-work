#include <stdio.h>
int main()
{
    /*This program calculates the net salary*/
    int a, b, c, d;
    printf("Enter the gross salary");
    scanf("%d", &a);
    if(a>10000)
       {
        b = (10*a)/100;
        c = (3*a)/100;
        d = a + b - c;
        printf("%d is the net salary", d);
       }
    else
    if(a>5000)
        {
        b = (7*a)/100;
        c = (2*a)/100;
        d = a + b - c;
        printf("%d is the net salary", d);
        }
    else
        {
            printf("There is an error.");
        }
}
