#include <stdio.h>
int main()
{
    int t, c, sum;
    c=0; sum=0;
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
            sum = sum + i;
    }
    printf("Sum of all prime no.s from 1 to 500 is %d", sum);
}
