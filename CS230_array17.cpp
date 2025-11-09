#include <stdio.h>
int main()
{
    int n, i;
    printf("How many elements do you want to store?\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d",  &a[i]);
    printf("\nOriginal array:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\nModified array:\n");
    for(i=0; i<(n-1); i++)
        printf("%d ", a[i]);
}
