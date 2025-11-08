#include <stdio.h>
int main()
{
    int i, sum;
    sum = 0;
    for(i=0; i<100; i++)
    {
        if(i%13 == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of all the nos between 1 to 100 that are divisible by 13 is %d", sum);
}
