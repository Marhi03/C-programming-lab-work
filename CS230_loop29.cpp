#include <stdio.h>
int main()
{
    int n, t, c;
    c=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        t = n%i;
        if(t==0)
            c++;
    }
    if(c==2)
         {printf("\n%d is a prime number.\n", n);}
    else
         {printf("%d is not a prime number.\n", n);}

}
