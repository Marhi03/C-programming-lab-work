#include <stdio.h>
int main()
{
    int a, b, c;
    int power(int, int);
    printf("Enter the base value and power to which it should be raised: \n");
    scanf("%d %d", &a, &b);
    c = power(a,b);
    printf("Answer is %d", c);
}

int power(int x, int y)
{
    int i, t;
    t=1;
    for(i=1; i<=y; i++)
        t = t*x;
    return t;
}
