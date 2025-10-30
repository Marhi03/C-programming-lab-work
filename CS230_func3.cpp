#include <stdio.h>
int main()
{
    int a, b;
    int factorial(int);
    printf("Enter a value:\n");
    scanf("%d", &a);
    b = factorial(a);
    printf("The factorial of %d is %d.\n", a, b);
}

int factorial(int x)
{
    if(x == 0)
        {return 1;}
    else
        {return x * factorial(x-1);}
}
