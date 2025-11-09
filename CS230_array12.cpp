#include <stdio.h>
int main()
{
    int a[5], i, n, b[6];
    printf("Enter 5 values: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("\nOriginal array:\n");
    for(i=0; i<5; i++)
        printf("%d ", a[i]);
    printf("\nEnter the new no. to be inserted in the beginning.\n");
    scanf("%d", &n);
    for(i=0; i<5; i++)
        b[i+1]=a[i];
    b[0]=n;
    printf("New array:\n");
    for(i=0; i<6; i++)
        printf("%d ", b[i]);
}
