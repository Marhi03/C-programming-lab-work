#include <stdio.h>
int main()
{
    int a[10], i, j, n;
    n=0;
    printf("Enter 10 values: ");
    for(i=0;i<10; i++)
        scanf("%d", &a[i]);
    printf("\nEntered array:\n");
    for(i=0; i<10; i++)
        printf("%d ", a[i]);
    for(i=0; i<10; i++)
    {
        n=0;
        for(j=0; j<10; j++)
        {
            if(a[i]==a[j])
        {
            n++;
        }
        }
        printf("\nFrequency of %d is %d.\n", a[i], n);
    }
}
