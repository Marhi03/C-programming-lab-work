#include <stdio.h>
int main()
{
    int n, i, p, pos;
    printf("How many elements do you want to store?\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d values: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nOriginal array:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\nEnter the position to be deleted.\n");
    scanf("%d", &p);
    pos=p-1;
    for(i=pos; i<n; i++)
        a[i]=a[i+1];
    printf("Modified array:\n");
    for(i=0; i<(n-1); i++)
        printf("%d ", a[i]);
}
