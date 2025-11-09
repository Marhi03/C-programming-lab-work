#include <stdio.h>
int main()
{
    int i, x[5], t;
    printf("Enter 5 values: ");
    for(i=0; i<5; i++)
        scanf("%d", &x[i]);
    for(i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(x[i]>x[j])
            {
                t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0; i<5; i++)
        printf("%d\n", x[i]);
}
