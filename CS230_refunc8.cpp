#include <stdio.h>
int main()
{
    int sod(int);
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    printf("Sum of digits is %d is %d.\n", n,sod(n));
}
int sod(int n)
{
    if(n)
    {
        int r  =  n%10;
        return r + sod(n/10);
    }
    else
        return 0;
}
