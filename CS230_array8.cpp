#include <stdio.h>
int main()
{
    int a[5], b[10], i, j;
    printf("Enter 5 values:\n");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    for(i=0; i<5; i++)
        {
            b[j] = a[i];
            j+=2;
        }
    printf("Original array:\n");
    for(i=0; i<5; i++)
        printf("%d\t", a[i]);
    printf("\nCopied array:\n");
    for(i=0; i<10; i++)
        printf("%d\t", b[i]);
}
