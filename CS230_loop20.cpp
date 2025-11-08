#include <stdio.h>
int main()
{
    int i, sum;
    sum=0;
    for(i=0; i<100; i++)
    {
        if(i%3 == 0)
            sum = sum + i;
    }
    printf("Sum of all integers from 1 to 100 which are divisible by 3 is %d.\n", sum);
}
