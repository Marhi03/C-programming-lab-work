#include <stdio.h>
int main()
{
    int n, t;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("\nFactors of the given number are:\n");
    for(int i=1; i<=n; i++)
    {
        t = n%i;
        if(t == 0)
            printf("%d\n", i);
    }
}
