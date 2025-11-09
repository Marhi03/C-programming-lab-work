#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter values(maximum 5): ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOriginal array:\n");
    for(int i=0; i<5; i++)
        printf("%d ", a[i]);

     for(int i=0, j=4; i<j; j--, i++)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("\nReverse array:\n");
    for(int i=0; i<5; i++)
        printf("%d ", a[i]);
}
