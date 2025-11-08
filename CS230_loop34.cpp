#include <stdio.h>
int main()
{
    int n, term, a, b;
    a=0; b=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series till %d is:\n", n);
    printf("%d, ", b);
    for(int i=3; i<n; i++)
    {
        term = a+b;
        printf("%d, ", term);
        a=b;
        b=term;
    }
}
