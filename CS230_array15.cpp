#include <stdio.h>
int main()
{
    int a[5], i;
    printf("Enter 5 values: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("\nOriginal array:\n");
    for(i=0; i<5; i++)
        printf("%d ", a[i]);
    for(i=0; i<5; i++)
        a[i]=a[i+1];
    printf("\nModified array:\n");
    for(i=0; i<4; i++)
        printf("%d ", a[i]);
}
