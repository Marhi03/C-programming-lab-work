#include <stdio.h>
int main()
{
    int a, b;
    void xswap(int, int);
    printf("Enter the values to be swapped.\n");
    scanf("%d %d", &a, &b);
    xswap(a, b);
    printf("Original values: %d %d", a, b);
}

void xswap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("Swapped values: %d %d\n", x, y);
}
