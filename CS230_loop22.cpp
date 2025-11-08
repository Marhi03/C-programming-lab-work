#include <stdio.h>
int main()
{
    int n, numcount;
    printf("Enter a value: \n");
    scanf("%d", &n);
    if(n<0)
        n = -n;
    else
    {
            if(n==0)
                numcount = 1;
            else
            {
                while(n!=0)
                {n = n/10;
                numcount++;}
            }
    }
    printf("The given value has %d digits.\n", numcount);
}
