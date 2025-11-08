#include <stdio.h>
int main()
{
    int t, c, a;
    c=0; a=0;
    for(int i=1; i<=500; i++)
    {
        c=0;
        for(int j=1; j<=i; j++)
        {
            t = i%j;
            if(t==0)
                c++;
        }
        if(c==2)
            a++;
    }
    printf("There are %d prime no.s between 1 and 500.\n", a);
}
