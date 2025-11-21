#include <stdio.h>
int main()
{
    void prime(int);
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);
    prime(n);
}

void prime(int x)
{
    int t, c=0;
    for(int i=1; i<=x; i++)
    {
       t=x%i;
    if(t==0)
        c++;
    }
    if(c==2)
        {printf("\n%d is a prime number.\n", x);}
    else
        printf("%d is not a prime number.\n", x);
}
