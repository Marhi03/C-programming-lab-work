#include <stdio.h>
int main()
{
    void sum(void);
    sum();
}

void sum(void)
{
    int sum=0;
    for(int i=0; i<100; i++)
    {
        if(i%3==0 && i%13==0)
            sum = sum + i;
    }
    printf("Sum of all integers from 1 to 100, which are divisible by 3 and 13 is %d.\n", sum);
}
