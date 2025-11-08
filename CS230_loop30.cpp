#include <stdio.h>
int main()
{
    int t, c;
    c=0;
    printf("Prime no.s between 1 to 500 are:\n");
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
                printf("%d\n", i);
    }
}
