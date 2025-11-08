#include <stdio.h>

int main()
{
    int n, sq, digits, temp, divisor, lastPart;
    digits=0; divisor=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    sq = n * n;
    temp = n;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }
    for (int i = 0; i < digits; i++)
        divisor *= 10;
    lastPart = sq % divisor;
    if (lastPart == n)
        printf("%d is an Automorphic number.\n", n);
    else
        printf("%d is not an Automorphic number.\n", n);
}
