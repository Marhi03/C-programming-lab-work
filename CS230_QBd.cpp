#include <stdio.h>
int main()
{
    void oddsum(int);
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);
    oddsum(n);
}

void oddsum(int x)
{
    int sum=0;
    for(int i=0; i<x; i++)
        sum = sum + (2*i+1);
    printf("\nSum of 1st n odd nos. is %d.\n", sum);
}
