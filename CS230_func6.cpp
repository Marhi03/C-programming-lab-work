#include <stdio.h>
int main()
{
    int add(int, int);
    int sub(int, int);
    int multiply(int, int);
    int divide(int, int);
    int a, b, c;
    printf("Which operation do you want to perform?\n");
    printf("Press 1 for addition.\n");
    printf("Press 2 for subtraction.\n");
    printf("Press 3 for multiplication.\n");
    printf("Press 4 for division.\n");
    scanf("%d", &a);
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &b, &c);
    switch(a)
    {
        case 1: {int w;
                 w = add(b, c);
                 printf("Addition of 2 numbers is %d.\n", w);}
                 break;
        case 2: {int x;
                 x = sub(b, c);
                 printf("Subtraction of 2 numbers is %d.\n", x);}
                 break;
        case 3: {int y;
                 y = multiply(b, c);
                 printf("Multiplication of 2 numbers is %d.\n", y);}
                 break;
        case 4: {int z;
                 z = divide(b, c);
                 printf("Division of 2 numbers is %.d.\n", z);}
                 break;
        default : {printf("Invalid input.\n");}

    }
}

int add(int p, int q)
{
    return(p+q);
}

int sub(int d, int e)
{
    return(d-e);
}

int multiply(int f, int g)
{
    return(f*g);
}

int divide(int h, int i)
{
    return(h/i);
}
