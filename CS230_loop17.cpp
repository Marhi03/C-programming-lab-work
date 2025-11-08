#include <stdio.h>
int main()
{
    int i, pos, neg, zero, a[200];
    pos=0; neg=0; zero=0;
    printf("Enter 5 values: \n");
    for(i=0; i<200; i++)
       scanf("%d", &a[i]);
    for(i=0; i<200; i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else
        {
            if(a[i]<0)
            {
                neg++;
            }
            else
            {
                zero++;
            }
        }
    }
    printf("Total positive nos are %d.\n", pos);
    printf("Total negative nos are %d.\n", neg);
    printf("Total no of zeros are %d.\n", zero);
}
