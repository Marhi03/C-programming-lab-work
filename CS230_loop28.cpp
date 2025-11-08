#include <stdio.h>
int main()
{
    int n, t, sum;
    sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i=1; i<=(n/2); i++)
    {
        t = n%i;
        if(t == 0)
            sum = sum + i;
    }
    if(sum == n)
    printf("\n%d is a perfect no.\n", n);
    else
        printf("%d is not a perfect no.\n", n);
}
