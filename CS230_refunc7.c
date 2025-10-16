#include <stdio.h>
int main()
{
    int recgcd(int, int);
    int n, d;
    printf("GCD: Enter 2 nos:");
    scanf("%d%d", &n,&d);
    printf("GCD of %d and %d is %d\n",n,d,recgcd(n,d));
}
int recgcd(int n, int d)
{
    return((n%d)?recgcd(d,n%d):d);
}
